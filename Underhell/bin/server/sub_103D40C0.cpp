int __thiscall sub_103D40C0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  char v4; // al
  int v5; // ecx
  float v7; // [esp+8h] [ebp-1Ch]
  float v8[3]; // [esp+18h] [ebp-Ch] BYREF

  v7 = *(float *)(dword_106B31C8 + 12) + 4.0;
  sub_100EC3F0((_DWORD *)this, (int)sub_103D1CE0, v7, off_1067E55C);
  if ( *(_BYTE *)(this + 1177) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1177);
    }
    *(_BYTE *)(this + 1177) = 0;
  }
  if ( *(_BYTE *)(this + 1178) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1178);
    }
    *(_BYTE *)(this + 1178) = 1;
  }
  v4 = *(_BYTE *)(this + 1144);
  if ( v4 != 2 )
  {
    if ( !v4 )
      *(float *)(this + 1164) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 1144) = 2;
  }
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 424) + 112))(750.0);
  v5 = *(_DWORD *)(this + 424);
  v8[0] = 1.0e30;
  v8[1] = 1.0e30;
  v8[2] = 1.0e30;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 132))(v5, v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 408))(this);
  sub_1023C380((_DWORD *)this, (int)"NPC_CombineBall.Launch", 0.0, 0);
  return sub_103D3C70((_DWORD *)this);
}
