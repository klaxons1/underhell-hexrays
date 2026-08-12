char __thiscall sub_101CC150(int this, _DWORD *a2, int a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ebx
  _DWORD *v8; // esi
  __int64 v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]

  HIDWORD(v10) = a2;
  LODWORD(v10) = a2;
  sub_1010DD80((_DWORD *)(this + 716), v10, 0.0);
  if ( a2 )
    *(_DWORD *)(this + 3920) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    *(_DWORD *)(this + 3920) = -1;
  v4 = *(_BYTE *)(this + 3940) == 0;
  *(float *)(this + 3924) = *(float *)(dword_106B31C8 + 12);
  if ( !v4 )
    *(_DWORD *)(this + 3936) = 0;
  *(_BYTE *)(this + 3940) = 1;
  LOBYTE(v5) = sub_101CB160((void *)(this - 1120), "onpickup", "boogie");
  if ( (_BYTE)v5 )
  {
    v6 = a2[545];
    if ( v6 == -1
      || (v5 = v6 >> 12, off_1061BE18[4 * (a2[545] & 0xFFF) + 2] != v5)
      || !off_1061BE18[4 * (a2[545] & 0xFFF) + 1] )
    {
      if ( a3 == 1 )
      {
        v12 = 0x10000;
        v11 = 3.0;
      }
      else
      {
        v12 = 0;
        v11 = 2.0;
      }
      LOBYTE(v5) = sub_10219820(this - 1120, 150.0, *(float *)(dword_106B31C8 + 12), v11, v12);
    }
  }
  if ( (*(_DWORD *)(this - 872) & 0x1000) != 0 )
    LOBYTE(v5) = sub_10218FC0(this - 1120, 0);
  if ( (*(_DWORD *)(this - 872) & 0x40) != 0 )
  {
    v7 = 0;
    if ( *(int *)(this + 12) > 0 )
    {
      v8 = (_DWORD *)(this + 36);
      do
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 96))(*v8);
        LOBYTE(v5) = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v8 + 60))(*v8, 1);
        ++v7;
        v8 += 6;
      }
      while ( v7 < *(_DWORD *)(this + 12) );
    }
  }
  return v5;
}
