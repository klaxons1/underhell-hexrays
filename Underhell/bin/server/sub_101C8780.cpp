bool __thiscall sub_101C8780(int this, int a2, void (__thiscall *a3)(_DWORD *))
{
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  float v8; // [esp+0h] [ebp-10h]

  v4 = sub_100E94D0((_DWORD *)this, a2);
  if ( v4 <= 0 )
    return 1;
  v5 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( v4 > v5 )
    return 1;
  v6 = (double)v4 * *(float *)(dword_106B31C8 + 28);
  if ( v6 < *(float *)(dword_106B31C8 + 12) )
    v6 = *(float *)(dword_106B31C8 + 12);
  v8 = v6;
  sub_101C86B0((int)&off_10638774, v5, this, v8, *(_DWORD *)(this + 188));
  sub_100EC580((int *)this, a2, -1.0);
  sub_101C1F00((_DWORD *)this, a3);
  sub_100E9470((_DWORD *)this, a2, *(float *)(dword_106B31C8 + 12));
  return (*(_BYTE *)(this + 252) & 1) == 0;
}
