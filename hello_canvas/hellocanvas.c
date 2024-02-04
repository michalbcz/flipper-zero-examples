#include <furi.h>
#include <gui/gui.h>

static void render_callback(Canvas* const canvas, void* ctx) {
    UNUSED(ctx);

    canvas_draw_frame(canvas, 0, 0, 128, 64);

    canvas_set_font(canvas, FontPrimary);
    uint8_t x = 30;
    uint8_t y = 10;
    char* message = "hello";
    canvas_draw_str(canvas, x, y, message);
}

int32_t hello_canvas_app(void* p) {
    UNUSED(p);
    FURI_LOG_I("TEST", "Hello canvas world");

    // Set system callbacks
    ViewPort* view_port = view_port_alloc();
    view_port_draw_callback_set(view_port, render_callback, NULL);

    // Open GUI and register view_port
    Gui* gui = furi_record_open(RECORD_GUI);
    gui_add_view_port(gui, view_port, GuiLayerFullscreen);

    view_port_update(view_port);

    furi_delay_ms(5000);

    view_port_enabled_set(view_port, false);
    gui_remove_view_port(gui, view_port);
    furi_record_close(RECORD_GUI);
    view_port_free(view_port);

    return 0;
}
