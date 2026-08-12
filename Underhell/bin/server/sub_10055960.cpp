int __thiscall sub_10055960(int *this, unsigned int a2)
{
  int v3; // eax
  int v4; // eax
  int result; // eax

  if ( a2 )
  {
    if ( !sub_10051900(a2, this + 7) )
    {
      v3 = *(_DWORD *)(a2 + 68);
      if ( v3 != a2 )
      {
        if ( v3 )
          *(_DWORD *)(v3 + 72) = *(_DWORD *)(a2 + 72);
        else
          this[3] = *(_DWORD *)(a2 + 72);
        v4 = *(_DWORD *)(a2 + 72);
        if ( v4 )
          *(_DWORD *)(v4 + 68) = *(_DWORD *)(a2 + 68);
        else
          this[4] = *(_DWORD *)(a2 + 68);
        *(_DWORD *)(a2 + 72) = a2;
        *(_DWORD *)(a2 + 68) = a2;
        --this[6];
      }
    }
  }
  result = this[5];
  *(_DWORD *)(a2 + 72) = result;
  this[5] = a2;
  return result;
}
