int __thiscall sub_10251BD0(int (__thiscall ***this)(void *, int *, int *))
{
  int v2; // edi
  int *v4; // [esp+14h] [ebp-10h] BYREF
  int *v5; // [esp+18h] [ebp-Ch] BYREF
  int v6; // [esp+1Ch] [ebp-8h] BYREF
  int v7; // [esp+20h] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107) )
    return sub_10238F50(this);
  (*(void (__thiscall **)(int, int **, int **))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v5, &v4);
  sub_10236F60(this, &v5, &v4);
  v2 = (*this)[252](this, v5, v4);
  if ( (unsigned __int8)(*this)[250](this, &v6, &v7) && v2 >= v6 && v2 < v7 )
    return sub_10238F50(this);
  else
    return 0;
}
