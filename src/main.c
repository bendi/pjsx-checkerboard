#include <pebble.h>

static Window *s_main_window;

//#######################
//#### add variable #####
static Layer *s_top1_layer;

static Layer *s_top2_layer;

static Layer *s_left1_layer;

static Layer *s_left2_layer;

static Layer *s_bottom1_layer;

static Layer *s_bottom2_layer;

static Layer *s_right1_layer;

static Layer *s_right2_layer;

static Layer *s_mid1_layer;

static Layer *s_mid2_layer;

static Layer *s_mid3_layer;

static Layer *s_mid4_layer;

static Layer *s_dd1_layer;

static Layer *s_dd2_layer;

static Layer *s_dd3_layer;

static Layer *s_dd4_layer;

static TextLayer *hoursLayer;


static TextLayer *minutesLayer;



//#######################

static void top1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void top1_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_top1_layer = layer_create(
      GRect(0, 12, 72, 12)
    );
    layer_add_child(window_get_root_layer(window), s_top1_layer);
    layer_set_update_proc(s_top1_layer, top1_update_proc);
    layer_mark_dirty(s_top1_layer);
  }
static void top2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void top2_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_top2_layer = layer_create(
      GRect(72, 12, 72, 12)
    );
    layer_add_child(window_get_root_layer(window), s_top2_layer);
    layer_set_update_proc(s_top2_layer, top2_update_proc);
    layer_mark_dirty(s_top2_layer);
  }
static void left1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void left1_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_left1_layer = layer_create(
      GRect(0, 12, 12, 72)
    );
    layer_add_child(window_get_root_layer(window), s_left1_layer);
    layer_set_update_proc(s_left1_layer, left1_update_proc);
    layer_mark_dirty(s_left1_layer);
  }
static void left2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void left2_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_left2_layer = layer_create(
      GRect(0, 84, 12, 72)
    );
    layer_add_child(window_get_root_layer(window), s_left2_layer);
    layer_set_update_proc(s_left2_layer, left2_update_proc);
    layer_mark_dirty(s_left2_layer);
  }
static void bottom1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void bottom1_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_bottom1_layer = layer_create(
      GRect(0, 144, 72, 12)
    );
    layer_add_child(window_get_root_layer(window), s_bottom1_layer);
    layer_set_update_proc(s_bottom1_layer, bottom1_update_proc);
    layer_mark_dirty(s_bottom1_layer);
  }
static void bottom2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void bottom2_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_bottom2_layer = layer_create(
      GRect(72, 144, 72, 12)
    );
    layer_add_child(window_get_root_layer(window), s_bottom2_layer);
    layer_set_update_proc(s_bottom2_layer, bottom2_update_proc);
    layer_mark_dirty(s_bottom2_layer);
  }
static void right1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void right1_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_right1_layer = layer_create(
      GRect(132, 12, 12, 72)
    );
    layer_add_child(window_get_root_layer(window), s_right1_layer);
    layer_set_update_proc(s_right1_layer, right1_update_proc);
    layer_mark_dirty(s_right1_layer);
  }
static void right2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void right2_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_right2_layer = layer_create(
      GRect(132, 84, 12, 72)
    );
    layer_add_child(window_get_root_layer(window), s_right2_layer);
    layer_set_update_proc(s_right2_layer, right2_update_proc);
    layer_mark_dirty(s_right2_layer);
  }
static void mid1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void mid1_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_mid1_layer = layer_create(
      GRect(PBL_IF_ROUND_ELSE(0, 12), PBL_IF_ROUND_ELSE(0, 24), PBL_IF_ROUND_ELSE(90, 60), PBL_IF_ROUND_ELSE(90, 60))
    );
    layer_add_child(window_get_root_layer(window), s_mid1_layer);
    layer_set_update_proc(s_mid1_layer, mid1_update_proc);
    layer_mark_dirty(s_mid1_layer);
  }
static void mid2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void mid2_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_mid2_layer = layer_create(
      GRect(PBL_IF_ROUND_ELSE(90, 72), PBL_IF_ROUND_ELSE(0, 24), PBL_IF_ROUND_ELSE(90, 60), PBL_IF_ROUND_ELSE(90, 60))
    );
    layer_add_child(window_get_root_layer(window), s_mid2_layer);
    layer_set_update_proc(s_mid2_layer, mid2_update_proc);
    layer_mark_dirty(s_mid2_layer);
  }
static void mid3_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void mid3_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_mid3_layer = layer_create(
      GRect(PBL_IF_ROUND_ELSE(0, 12), PBL_IF_ROUND_ELSE(90, 84), PBL_IF_ROUND_ELSE(90, 60), PBL_IF_ROUND_ELSE(90, 60))
    );
    layer_add_child(window_get_root_layer(window), s_mid3_layer);
    layer_set_update_proc(s_mid3_layer, mid3_update_proc);
    layer_mark_dirty(s_mid3_layer);
  }
static void mid4_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_rect(ctx, bounds, 0, 0);
    
    
  }
  static void mid4_create_rect_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_mid4_layer = layer_create(
      GRect(PBL_IF_ROUND_ELSE(90, 72), PBL_IF_ROUND_ELSE(90, 84), PBL_IF_ROUND_ELSE(90, 60), PBL_IF_ROUND_ELSE(90, 60))
    );
    layer_add_child(window_get_root_layer(window), s_mid4_layer);
    layer_set_update_proc(s_mid4_layer, mid4_update_proc);
    layer_mark_dirty(s_mid4_layer);
  }
static void dd1_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_radial(
        ctx,
        bounds,
        GOvalScaleModeFitCircle,
        15,
        DEG_TO_TRIGANGLE(0),
        DEG_TO_TRIGANGLE(90)
      );
    
  }
  static void dd1_create_arc_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_dd1_layer = layer_create(
      GRect(0, 0, 180, 180)
    );
    layer_add_child(window_get_root_layer(window), s_dd1_layer);
    layer_set_update_proc(s_dd1_layer, dd1_update_proc);
    layer_mark_dirty(s_dd1_layer);
  }
static void dd2_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_radial(
        ctx,
        bounds,
        GOvalScaleModeFitCircle,
        15,
        DEG_TO_TRIGANGLE(90),
        DEG_TO_TRIGANGLE(180)
      );
    
  }
  static void dd2_create_arc_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_dd2_layer = layer_create(
      GRect(0, 0, 180, 180)
    );
    layer_add_child(window_get_root_layer(window), s_dd2_layer);
    layer_set_update_proc(s_dd2_layer, dd2_update_proc);
    layer_mark_dirty(s_dd2_layer);
  }
static void dd3_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorRed);
      graphics_fill_radial(
        ctx,
        bounds,
        GOvalScaleModeFitCircle,
        15,
        DEG_TO_TRIGANGLE(180),
        DEG_TO_TRIGANGLE(270)
      );
    
  }
  static void dd3_create_arc_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_dd3_layer = layer_create(
      GRect(0, 0, 180, 180)
    );
    layer_add_child(window_get_root_layer(window), s_dd3_layer);
    layer_set_update_proc(s_dd3_layer, dd3_update_proc);
    layer_mark_dirty(s_dd3_layer);
  }
static void dd4_update_proc(Layer *layer, GContext *ctx) {
    GRect bounds = layer_get_bounds(layer);

    
      graphics_context_set_fill_color(ctx, GColorWhite);
      graphics_fill_radial(
        ctx,
        bounds,
        GOvalScaleModeFitCircle,
        15,
        DEG_TO_TRIGANGLE(270),
        DEG_TO_TRIGANGLE(360)
      );
    
  }
  static void dd4_create_arc_layer(Window *window) {
    Layer *window_layer = window_get_root_layer(window);

    s_dd4_layer = layer_create(
      GRect(0, 0, 180, 180)
    );
    layer_add_child(window_get_root_layer(window), s_dd4_layer);
    layer_set_update_proc(s_dd4_layer, dd4_update_proc);
    layer_mark_dirty(s_dd4_layer);
  }
static void add_hoursLayer(Window *window) {
  // Get information about the Window
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_bounds(window_layer);

  hoursLayer = text_layer_create(
    GRect(0, PBL_IF_ROUND_ELSE(38, 34), bounds.size.w, 50)
  );

  // Improve the layout to be more like a watchface
  text_layer_set_background_color(hoursLayer, GColorClear);
  text_layer_set_text_color(hoursLayer, GColorBlack);
  text_layer_set_font(hoursLayer, fonts_get_system_font(FONT_KEY_BITHAM_42_BOLD));
  text_layer_set_text_alignment(hoursLayer, GTextAlignmentCenter);

  // Add it as a child layer to the Window's root layer
  layer_add_child(window_layer, text_layer_get_layer(hoursLayer));
}


static void update_time_hoursLayer() {
  // Get a tm structure
  time_t temp = time(NULL);
  struct tm *tick_time = localtime(&temp);

  // Write the current hours and minutes into a buffer
  static char s_buffer[8];
  strftime(s_buffer, sizeof(s_buffer), clock_is_24h_style() ?
                                          "%H" : "%I", tick_time);

  // Display this time on the TextLayer
  text_layer_set_text(hoursLayer, s_buffer);
}

static void tick_handler_hoursLayer(struct tm *tick_time, TimeUnits units_changed) {
  update_time_hoursLayer();
}


static void update_time_minutesLayer() {
  // Get a tm structure
  time_t temp = time(NULL);
  struct tm *tick_time = localtime(&temp);

  // Write the current hours and minutes into a buffer
  static char s_buffer[8];
  strftime(s_buffer, sizeof(s_buffer), clock_is_24h_style() ?
                                          "%M" : "%M", tick_time);

  // Display this time on the TextLayer
  text_layer_set_text(minutesLayer, s_buffer);
}

static void tick_handler_minutesLayer(struct tm *tick_time, TimeUnits units_changed) {
  update_time_minutesLayer();
}

static void jsx_tick_handler(struct tm *tick_time, TimeUnits units_changed) {
        if ((HOUR_UNIT & units_changed) > 0) {
          tick_handler_hoursLayer(tick_time, units_changed);
        } 
if ((MINUTE_UNIT & units_changed) > 0) {
          tick_handler_minutesLayer(tick_time, units_changed);
        } 

      }

static void add_minutesLayer(Window *window) {
  // Get information about the Window
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_bounds(window_layer);

  minutesLayer = text_layer_create(
    GRect(0, PBL_IF_ROUND_ELSE(95, 88), bounds.size.w, 50)
  );

  // Improve the layout to be more like a watchface
  text_layer_set_background_color(minutesLayer, GColorClear);
  text_layer_set_text_color(minutesLayer, GColorBlack);
  text_layer_set_font(minutesLayer, fonts_get_system_font(FONT_KEY_BITHAM_42_BOLD));
  text_layer_set_text_alignment(minutesLayer, GTextAlignmentCenter);

  // Add it as a child layer to the Window's root layer
  layer_add_child(window_layer, text_layer_get_layer(minutesLayer));
}



static void main_window_load(Window *window) {
  //#############################
  //#### add load operation #####
  window_set_background_color(window, GColorLightGray);

#if !defined(PBL_ROUND) 
 top1_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 top2_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 left1_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 left2_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 bottom1_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 bottom2_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 right1_create_rect_layer(window);

#endif
#if !defined(PBL_ROUND) 
 right2_create_rect_layer(window);

#endif
mid1_create_rect_layer(window);

mid2_create_rect_layer(window);

mid3_create_rect_layer(window);

mid4_create_rect_layer(window);

#if !defined(PBL_RECT) 
 dd1_create_arc_layer(window);

#endif
#if !defined(PBL_RECT) 
 dd2_create_arc_layer(window);

#endif
#if !defined(PBL_RECT) 
 dd3_create_arc_layer(window);

#endif
#if !defined(PBL_RECT) 
 dd4_create_arc_layer(window);

#endif
add_hoursLayer(window);

  // Make sure the time is displayed from the start
  update_time_hoursLayer();

add_minutesLayer(window);

  // Make sure the time is displayed from the start
  update_time_minutesLayer();


  //#############################
}

static void main_window_unload(Window *window) {
  //###############################
  //#### add unload operation #####
  #if !defined(PBL_ROUND) 
 layer_destroy(s_top1_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_top2_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_left1_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_left2_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_bottom1_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_bottom2_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_right1_layer);

#endif
#if !defined(PBL_ROUND) 
 layer_destroy(s_right2_layer);

#endif
layer_destroy(s_mid1_layer);

layer_destroy(s_mid2_layer);

layer_destroy(s_mid3_layer);

layer_destroy(s_mid4_layer);

#if !defined(PBL_RECT) 
 layer_destroy(s_dd1_layer);

#endif
#if !defined(PBL_RECT) 
 layer_destroy(s_dd2_layer);

#endif
#if !defined(PBL_RECT) 
 layer_destroy(s_dd3_layer);

#endif
#if !defined(PBL_RECT) 
 layer_destroy(s_dd4_layer);

#endif
text_layer_destroy(hoursLayer);

text_layer_destroy(minutesLayer);


  //###############################
}

static void init() {
  // Create main Window element and assign to pointer
  s_main_window = window_create();

  // Set handlers to manage the elements inside the Window
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });

  // Show the Window on the watch, with animated=true
  window_stack_push(s_main_window, true);

  
tick_timer_service_subscribe(SECOND_UNIT, jsx_tick_handler);




}

static void deinit() {
  //######################
  //#### add destroy #####

	tick_timer_service_unsubscribe();
  //######################
  // Destroy Window
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
