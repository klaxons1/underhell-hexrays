int __thiscall sub_103B3E40(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *v4; // edi
  char v5; // bl
  int (__thiscall *v6)(_DWORD *); // eax
  int v7; // ecx
  int (__thiscall *v8)(_DWORD *); // eax
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // eax
  int v12; // edx
  _DWORD v14[20]; // [esp+10h] [ebp-50h] BYREF

  v2 = this[950];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[950] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = (int *)*v3;
      if ( *v3 )
      {
        v5 = (*(int (__thiscall **)(int *))(*v4 + 264))(v4);
        sub_104157D0((int)(this + 919), (int)(this + 922), (int)this, 2.5);
        if ( v5 && (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 264))(v4) )
        {
          DevWarning("* * * * * * * * * * * * * * *\n");
          DevWarning("NASTYGRAM: STRIDER failed to kill its cannon target. Killing directly...\n");
          DevWarning("* * * * * * * * * * * * * * *\n");
          sub_10247EC0(v14);
          v6 = *(int (__thiscall **)(_DWORD *))(*this + 8);
          *(float *)&v14[13] = (float)v4[55];
          v14[16] = 0;
          v7 = *(_DWORD *)v6(this);
          v8 = *(int (__thiscall **)(_DWORD *))(*this + 8);
          v14[11] = v7;
          v14[10] = *(_DWORD *)v8(this);
          sub_100D9E70(v4, (int)this, v14);
        }
        this[950] = -1;
      }
    }
  }
  v9 = (int)(this + 905);
  v10 = this[910];
  v11 = *(_DWORD *)(v10 + 28);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(v10 + 28) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*(_DWORD *)(v10 + 28) & 0xFFF) + 1];
  return sub_103B1710(v10, v9, v12, 1.0);
}
