void init_save_states_for_rom();
void deinit_save_states_for_rom();

void save_state();
void load_state();

void handle_rewind(bool do_rewind);

unsigned get_frame_len();

// True if the current frame should appear to run in reverse (e.g. w.r.t.
// audio)
extern bool is_backwards_frame;

