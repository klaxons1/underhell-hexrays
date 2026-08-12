_DWORD *__thiscall sub_10192E00(int this, _DWORD *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax

  v3 = (_DWORD *)sub_10192970((int **)this, 0);
  if ( v3 )
  {
    if ( !sub_10192AC0((unsigned int)v3, (int *)(this + 28)) )
    {
      v4 = (_DWORD *)v3[1];
      if ( v4 != v3 )
      {
        if ( v4 )
          v4[2] = v3[2];
        else
          *(_DWORD *)(this + 12) = v3[2];
        v5 = v3[2];
        if ( v5 )
          *(_DWORD *)(v5 + 4) = v3[1];
        else
          *(_DWORD *)(this + 16) = v3[1];
        v3[2] = v3;
        v3[1] = v3;
        --*(_DWORD *)(this + 24);
      }
    }
  }
  v3[2] = 0;
  v6 = *(_DWORD *)(this + 16);
  v3[1] = v6;
  *(_DWORD *)(this + 16) = v3;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = v3;
    ++*(_DWORD *)(this + 24);
  }
  else
  {
    ++*(_DWORD *)(this + 24);
    *(_DWORD *)(this + 12) = v3;
  }
  *v3 = *a2;
  return v3;
}
