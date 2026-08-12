double sub_10135ED0()
{
  int v0; // eax
  float v2; // [esp+0h] [ebp-4h]

  if ( *(float *)(dword_10439EE4 + 44) >= 1.0 )
    return *(float *)(dword_10439EE4 + 44);
  v2 = *(float *)(dword_10439E0C + 44) * 1.7320508;
  v0 = sub_100422D0();
  if ( !v0 || v0 == -3356 || *(float *)(v0 + 3396) <= 0.0 )
    return v2;
  else
    return *(float *)(v0 + 3396);
}
