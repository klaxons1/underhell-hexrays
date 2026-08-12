void __thiscall sub_1007A050(int this, int a2, float a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax

  if ( -1.0 == a3 )
  {
    v4 = sub_1007A7B0(a2);
    if ( v4 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( v5 != 0xFFFF )
        sub_10079E70(this, v5);
    }
  }
  else
  {
    v6 = sub_1007A7B0(a2);
    v7 = v6;
    if ( v6 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      v9 = v8;
      if ( *(_BYTE *)(this + 76) )
      {
        v10 = 12 * sub_10079CF0((int *)(this + 52), *(_DWORD *)(this + 64));
        *(_DWORD *)(v10 + *(_DWORD *)(this + 52)) = a2;
        *(_DWORD *)(v10 + *(_DWORD *)(this + 52) + 4) = v9;
        *(float *)(v10 + *(_DWORD *)(this + 52) + 8) = a3;
      }
      else
      {
        if ( v8 == 0xFFFF )
        {
          v9 = (unsigned __int16)sub_1007A010((_DWORD *)(this + 4));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v9);
          v11 = *(_DWORD *)(this + 4) + 20 * v9;
          *(float *)(v11 + 8) = 0.0;
          *(_DWORD *)v11 = a2;
          *(_DWORD *)(v11 + 12) = -1;
        }
        *(float *)(*(_DWORD *)(this + 4) + 20 * (unsigned __int16)v9 + 4) = a3;
      }
    }
  }
}
