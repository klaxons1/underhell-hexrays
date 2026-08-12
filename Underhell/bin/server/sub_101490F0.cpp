void __thiscall sub_101490F0(_BYTE *this, int a2, int a3)
{
  int v4; // ecx

  v4 = *(_DWORD *)(a3 + 4 * (a2 == 0) + 104);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    sub_100DA500(this, a2, a3);
  else
    sub_10148D10((int)this, a2, a3);
}
