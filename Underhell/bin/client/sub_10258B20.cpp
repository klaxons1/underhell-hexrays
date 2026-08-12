void __thiscall sub_10258B20(int this, int a2)
{
  int v3; // ebp
  int v4; // edi

  if ( *(_BYTE *)(this + 219) && a2 == 107 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 400))(this, 107);
    sub_10258610((int *)this);
    v3 = *(_DWORD *)(this + 296);
    sub_10258540((_DWORD *)this);
    v4 = *(_DWORD *)(this + 296);
    if ( v4 > 0 && v4 - 1 < *(_DWORD *)(this + 236) )
    {
      if ( iswspace(*(_WORD *)(*(_DWORD *)(this + 224) + 2 * v4 - 2)) )
      {
        --*(_DWORD *)(this + 296);
        --v4;
      }
    }
    *(_DWORD *)(this + 308) = v4;
    *(_DWORD *)(this + 304) = v3;
    *(_BYTE *)(this + 300) = 1;
  }
}
