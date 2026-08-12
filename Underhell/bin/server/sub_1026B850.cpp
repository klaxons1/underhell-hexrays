void __thiscall sub_1026B850(void *this, int a2)
{
  const char *v4; // ecx
  const char *v5; // eax
  double v6; // st7
  unsigned int v7; // eax
  float v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+8h] [ebp-10h]
  float v11; // [esp+20h] [ebp+8h]

  if ( *(int *)(dword_106CEF04 + 48) > 1 )
  {
    v4 = "on";
    if ( !*(_BYTE *)(a2 + 13) )
      v4 = "off";
    v5 = "on";
    if ( !*(_BYTE *)(a2 + 12) )
      v5 = "off";
    Msg("Throttle: %s, Reverse: %s\n", v5, v4);
  }
  v6 = *(float *)(a2 + 4);
  v11 = *(float *)(a2 + 4);
  if ( *(int *)(dword_106CEF04 + 48) > 1 )
  {
    Msg("CurrentSpeed: %.3f  ", v6);
    v6 = v11;
  }
  if ( *((int *)this + 40) > 0 && v6 > *((float *)this + 98) )
  {
    if ( !*(_BYTE *)(a2 + 12) )
      v6 = *((float *)this + 98);
    v9 = *(float *)(*((_DWORD *)this + 37) + 16 * *((_DWORD *)this + 97) + 12) * *(float *)a2;
    v8 = v6;
    sub_10424B10(v8, *((float *)this + 98), v9);
  }
  if ( v6 <= 1.0 )
  {
    if ( v6 < 0.0 )
      v6 = 0.0;
  }
  else
  {
    v6 = 1.0;
  }
  *((float *)this + 98) = v6;
  if ( *(int *)(dword_106CEF04 + 48) > 1 )
    Msg("Sound Speed: %.3f\n", v6);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 280))(this, a2);
  v7 = sub_1026B410((int)this, (_BYTE *)a2);
  if ( v7 != *((_DWORD *)this + 101) )
  {
    v10 = *((_DWORD *)this + 101);
    *((_DWORD *)this + 101) = v7;
    sub_1026A710((int)this, v10);
  }
}
