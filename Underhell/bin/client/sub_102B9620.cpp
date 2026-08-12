int sub_102B9620()
{
  sub_10229300(
    byte_10433AD8,
    (int)"m_customaccel",
    "0",
    128,
    "Custom mouse acceleration (0 disable, 1 to enable, 2 enable with separate yaw/pitch rescale).\n"
    "Formula: mousesensitivity = ( rawmousedelta^m_customaccel_exponent ) * m_customaccel_scale + sensitivity\n"
    "If mode is 2, then x and y sensitivity are scaled by m_pitch and m_yaw respectively.",
    1,
    0.0,
    0,
    0.0);
  return atexit(sub_102CAA60);
}
