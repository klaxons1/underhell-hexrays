void __thiscall sub_101BE520(int this)
{
  int v2; // ecx
  bool v3; // zf
  const char *v4; // eax
  int v5; // eax
  const char *v6; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 2152);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, *(_DWORD *)(this + 424));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, *(_DWORD *)(this + 2152));
    *(_DWORD *)(this + 2152) = 0;
    sub_100EC4A0((int *)this, -1.0, 0);
    v3 = *(_DWORD *)(this + 2156) == 0;
    *(float *)(this + 2164) = 0.0;
    *(_BYTE *)(this + 2160) = 0;
    if ( !v3 )
      sub_101BE410((int *)this);
    if ( *(_DWORD *)(this + 2180) )
    {
      v4 = *(const char **)(this + 2180);
      if ( !v4 )
        v4 = String;
      v6 = v4;
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      sub_1023AF30(v5, 3, v6);
    }
  }
}
