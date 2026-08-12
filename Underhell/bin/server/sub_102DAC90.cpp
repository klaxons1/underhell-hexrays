int __thiscall sub_102DAC90(_DWORD **this)
{
  int v2; // ebx
  int i; // esi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  for ( i = sub_100B1560(this[1344], &v5, 1); i; i = sub_100B1630(this[1344], &v5, 1) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 1524))(i)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 1532))(i) )
    {
      ++v2;
    }
  }
  return v2;
}
