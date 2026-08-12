int __thiscall sub_10069720(void *this, int a2)
{
  const char *v3; // eax
  int v5; // edi

  if ( *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 2160))(this) + 4) == -1 )
  {
    v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 1324))(this);
    Warning("ERROR: %s missing schedule!\n", v3);
    return sub_100A78A0(1);
  }
  else
  {
    v5 = a2;
    if ( a2 < 1000000000 )
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 2160))(this);
      v5 = sub_1007DB30(a2);
    }
    return sub_100A78A0(v5);
  }
}
