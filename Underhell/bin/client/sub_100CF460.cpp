void __thiscall sub_100CF460(int this, void *Src)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-8h]

  if ( *(_DWORD *)(this + 4) )
  {
    for ( ; *(_DWORD *)(this + 224) >= *(_DWORD *)(this + 60); --*(_DWORD *)(this + 224) )
    {
      v3 = *(_DWORD **)(this + 212);
      if ( (int)v3[2] >= 0 )
      {
        if ( *v3 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
          *v3 = 0;
        }
        v3[1] = 0;
      }
      if ( *(_DWORD *)(this + 224) - 1 > 0 )
        memcpy(*(void **)(this + 212), (const void *)(*(_DWORD *)(this + 212) + 16), 16 * (*(_DWORD *)(this + 224) - 1));
    }
    v4 = sub_1022D310(Src);
    sub_100CCED0((int *)(this + 212), *(_DWORD *)(this + 224), v4);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__thiscall **)(_DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc);
    }
    sub_100CC100((void (__thiscall ***)(void *, char *, const char *))this);
  }
}
