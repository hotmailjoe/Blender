namespace blender::nodes::node_fn_align_euler_to_vector_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_axis_angle_to_rotation_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_boolean_math_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_combine_color_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_compare_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_euler_to_rotation_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_float_to_int_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_bool_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_color_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_int_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_special_characters_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_string_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_input_vector_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_invert_rotation_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_quaternion_to_rotation_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_random_value_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_replace_string_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_rotate_euler_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_rotate_vector_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_rotation_to_axis_angle_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_rotation_to_euler_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_rotation_to_quaternion_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_separate_color_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_slice_string_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_string_length_cc {
void node_register_discover();
}
namespace blender::nodes::node_fn_value_to_string_cc {
void node_register_discover();
}

void register_function_nodes();
void register_function_nodes()
{
  blender::nodes::node_fn_align_euler_to_vector_cc::node_register_discover();
  blender::nodes::node_fn_axis_angle_to_rotation_cc::node_register_discover();
  blender::nodes::node_fn_boolean_math_cc::node_register_discover();
  blender::nodes::node_fn_combine_color_cc::node_register_discover();
  blender::nodes::node_fn_compare_cc::node_register_discover();
  blender::nodes::node_fn_euler_to_rotation_cc::node_register_discover();
  blender::nodes::node_fn_float_to_int_cc::node_register_discover();
  blender::nodes::node_fn_input_bool_cc::node_register_discover();
  blender::nodes::node_fn_input_color_cc::node_register_discover();
  blender::nodes::node_fn_input_int_cc::node_register_discover();
  blender::nodes::node_fn_input_special_characters_cc::node_register_discover();
  blender::nodes::node_fn_input_string_cc::node_register_discover();
  blender::nodes::node_fn_input_vector_cc::node_register_discover();
  blender::nodes::node_fn_invert_rotation_cc::node_register_discover();
  blender::nodes::node_fn_quaternion_to_rotation_cc::node_register_discover();
  blender::nodes::node_fn_random_value_cc::node_register_discover();
  blender::nodes::node_fn_replace_string_cc::node_register_discover();
  blender::nodes::node_fn_rotate_euler_cc::node_register_discover();
  blender::nodes::node_fn_rotate_vector_cc::node_register_discover();
  blender::nodes::node_fn_rotation_to_axis_angle_cc::node_register_discover();
  blender::nodes::node_fn_rotation_to_euler_cc::node_register_discover();
  blender::nodes::node_fn_rotation_to_quaternion_cc::node_register_discover();
  blender::nodes::node_fn_separate_color_cc::node_register_discover();
  blender::nodes::node_fn_slice_string_cc::node_register_discover();
  blender::nodes::node_fn_string_length_cc::node_register_discover();
  blender::nodes::node_fn_value_to_string_cc::node_register_discover();
}