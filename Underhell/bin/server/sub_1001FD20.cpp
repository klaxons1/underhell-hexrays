int sub_1001FD20()
{
  int result; // eax

  result = sub_100AAD90(1, 0xFFFFF, 1);
  if ( !result )
  {
    DevMsg("Warning: NULL Return from GetBestScent\n");
    return 0;
  }
  return result;
}
