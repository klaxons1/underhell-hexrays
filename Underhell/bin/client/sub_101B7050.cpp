void __thiscall sub_101B7050(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // [esp+14h] [ebp-8h]

  v3 = sub_100422D0();
  v9 = (_DWORD *)v3;
  if ( v3 )
  {
    *(_DWORD *)(this + 460) = 0;
    v4 = -1;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 788))(v3);
    v6 = v5;
    if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1160))(v5) == a2 )
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6);
    v7 = sub_101B6BC0(a2, v4);
    v8 = v7;
    if ( !v7 || (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1160))(v7) != a2 )
      v8 = sub_101B6BC0(a2, -1);
    if ( v8 )
    {
      if ( v8 == v6 )
        goto LABEL_14;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1160))(v8) == a2 )
      {
        (*(void (__thiscall **)(int *, int))(*off_103ED0D8 + 60))(off_103ED0D8, v8);
LABEL_14:
        if ( *(_DWORD *)(dword_1043CA1C + 48) != 3 )
          *(float *)(this + 44) = 0.0;
        return;
      }
    }
    if ( v8 != v6 )
      sub_101212D0(v9, (int)"Player.DenyWeaponSelection", 0.0, 0);
    goto LABEL_14;
  }
}
