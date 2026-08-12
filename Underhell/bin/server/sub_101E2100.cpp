int __thiscall sub_101E2100(void *this, int a2)
{
  int v3; // esi
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-4h]
  int v7; // [esp+18h] [ebp+8h]

  v6 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1352))(this, a2);
  v3 = v6;
  v7 = 2 * ((_BYTE)a2 == 0) - 1;
  while ( 1 )
  {
    v4 = sub_1025FB50(v3);
    if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 1356))(this, v4) )
      break;
    v3 += v7;
    if ( v3 <= *(_DWORD *)(dword_106B31C8 + 20) )
    {
      if ( v3 < 1 )
        v3 = *(_DWORD *)(dword_106B31C8 + 20);
    }
    else
    {
      v3 = 1;
    }
    if ( v3 == v6 )
      return 0;
  }
  return v4;
}
