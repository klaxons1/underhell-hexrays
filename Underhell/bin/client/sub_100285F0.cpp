int __thiscall sub_100285F0(float *this, float a2)
{
  float *v3; // eax
  float *v4; // edi
  float v5; // ebx
  float v7; // edx
  int v8; // eax
  float v9[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = (float *)sub_1001F0C0(*((_DWORD *)this + 474));
  v4 = v3;
  if ( v3 )
  {
    if ( sub_1001AD30(v3, *((float *)off_103DC81C + 3), 0.0) )
      return (int)v4;
    if ( ((_DWORD)v4[1] & 0x100) == 0 )
    {
      sub_1001E3C0(*((_DWORD *)this + 474));
      this[474] = 0.0;
      v4 = 0;
    }
  }
  v5 = a2;
  if ( a2 == 0.0 )
  {
    if ( !*((_DWORD *)this + 485) && (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 1) + 36))((_DWORD *)this + 1) )
      sub_10026520((int)this);
    v5 = this[485];
    if ( v5 == 0.0 || !*(_DWORD *)LODWORD(v5) )
      v5 = 0.0;
  }
  (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(*((_DWORD *)this + 1) + 64))(
    0,
    -1,
    256,
    *((float *)off_103DC81C + 3));
  if ( v4 )
  {
    sub_1001E2D0(v4, *((_DWORD *)this + 469), *(_DWORD *)(*(_DWORD *)LODWORD(v5) + 156), *((float *)off_103DC81C + 3));
    return (int)v4;
  }
  v7 = this[469];
  v9[0] = v5;
  v9[1] = v7;
  v9[2] = *((float *)off_103DC81C + 3);
  LODWORD(v9[3]) = 256;
  v8 = sub_100208C0(v9);
  *((_DWORD *)this + 474) = v8;
  return sub_1001F0C0(v8);
}
