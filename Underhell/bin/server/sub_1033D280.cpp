void __thiscall sub_1033D280(int this)
{
  const char *v2; // eax

  if ( *(float *)(this + 4184) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = "COMBINEPRISONGUARD_GO_ALERT";
    if ( !*(_BYTE *)(this + 4976) )
      v2 = "COMBINE_GO_ALERT";
    sub_100AC410(this + 4244, v2, 2, 2);
    *(float *)(this + 4184) = *(float *)(dword_106B31C8 + 12) + 10.0;
  }
}
