void __thiscall sub_1020B9C0(int this, int a2, int a3)
{
  float v4; // [esp+0h] [ebp-14h]
  float v5; // [esp+10h] [ebp-4h]

  v4 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC3F0((_DWORD *)(this - 1124), (int)sub_1020B8C0, v4, off_10642FA0);
  v5 = *(float *)(dword_106B31C8 + 12);
  if ( a2 )
    *(_DWORD *)(this + 164) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 164) = -1;
  *(float *)(this + 168) = v5;
  if ( a3 == 1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 1124) + 840))(this - 1124);
  sub_100E88A0((_DWORD *)(this - 1124), *(_BYTE *)(this + 174));
}
