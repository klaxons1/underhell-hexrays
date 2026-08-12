int __thiscall sub_100BFC30(int this)
{
  int v1; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  int v8[1536]; // [esp+18h] [ebp-1810h] BYREF
  _DWORD v9[4]; // [esp+1818h] [ebp-10h] BYREF

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  v5 = sub_10101E40(*(_DWORD *)(this + 1056));
  if ( v5 )
  {
    if ( (unsigned __int8)sub_100FE180(*(float *)(dword_106B31C8 + 12), 0.1)
      && (*(_DWORD *)(v5 + 4) & 0x300) == 0x300
      && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)v5 )
    {
      return v5;
    }
    if ( (*(_DWORD *)(v5 + 4) & 0x300) != 0x300 )
    {
      sub_10101200(*(_DWORD *)(this + 1056));
      v5 = 0;
      *(_DWORD *)(this + 1056) = 0;
    }
  }
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)this + 776))(this, v8, 768);
  if ( v5 )
  {
    sub_10101110((int)v8, *(_DWORD *)(*(_DWORD *)v4 + 156), *(float *)(dword_106B31C8 + 12));
    return v5;
  }
  v9[0] = v4;
  v9[1] = v8;
  *(float *)&v9[2] = *(float *)(dword_106B31C8 + 12);
  v9[3] = 768;
  v7 = sub_10103740(v9);
  *(_DWORD *)(this + 1056) = v7;
  return sub_10101E40(v7);
}
