void __thiscall sub_10079E70(int this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax

  if ( a2 != 0xFFFF )
  {
    if ( *(_BYTE *)(this + 76) )
    {
      v2 = (_DWORD *)(this + 52);
      v3 = 12 * sub_10079CF0((int *)(this + 52), *(_DWORD *)(this + 64));
      *(_DWORD *)(v3 + *v2) = -1;
      *(_DWORD *)(*v2 + v3 + 4) = a2;
      *(float *)(*v2 + v3 + 8) = -1.0;
    }
    else
    {
      v4 = this + 4;
      v5 = 20 * (unsigned __int16)a2;
      v6 = sub_1007A7B0(*(_DWORD *)(v5 + *(_DWORD *)(this + 4)));
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 12))(v6, 0xFFFF);
      sub_100799C0((int *)v4, a2);
      *(_WORD *)(*(_DWORD *)v4 + v5 + 18) = *(_WORD *)(v4 + 16);
      *(_WORD *)(v4 + 16) = a2;
    }
  }
}
