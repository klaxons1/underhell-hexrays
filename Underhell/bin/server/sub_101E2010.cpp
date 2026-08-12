char __thiscall sub_101E2010(_DWORD *this, char a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int v9; // [esp-8h] [ebp-Ch]

  v3 = sub_1016BF40();
  LOBYTE(v4) = (*(int (__thiscall **)(int *))(v3[3] + 4))(v3 + 3);
  if ( (_BYTE)v4 )
  {
    v4 = sub_100D8840(this);
    if ( v4 == 1 )
    {
      if ( a2 )
      {
        v5 = sub_1016BF40()[99];
        if ( v5 )
        {
          v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
          v9 = 0;
          if ( v5 != v7 )
          {
            LOBYTE(v4) = sub_102601C0(this, 3, "Camera in use by other player.", 0, 0, 0, 0);
            return v4;
          }
        }
        else
        {
          v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
        }
        v6 = sub_1016BF40();
        LOBYTE(v4) = sub_1016C930(v6, v9);
      }
    }
  }
  return v4;
}
