void __thiscall sub_1033E960(int this, int *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  char *v5; // eax
  _DWORD *v6; // eax
  const char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  const char *v10; // [esp-Ch] [ebp-10h]

  if ( *(_DWORD *)(this + 2324) != 4
    || (v3 = *(_DWORD *)(this + 2688), v3 == -1)
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] != v3 >> 12)
    || !*v4 )
  {
    if ( a2[6] == 2 )
    {
      v5 = (char *)a2[2];
      if ( !v5 )
        v5 = (char *)String;
    }
    else
    {
      v5 = (char *)sub_1010D460((int)(a2 + 2));
    }
    v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, *a2, a2[1], 0);
    if ( v6 )
    {
      *(_DWORD *)(this + 4208) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
      *(float *)(this + 4216) = 0.0;
      sub_10044510(this, (int)"Told to throw grenade via input");
    }
    else
    {
      if ( a2[6] == 2 )
      {
        if ( a2[2] )
          v7 = (const char *)a2[2];
        else
          v7 = String;
      }
      else
      {
        v7 = sub_1010D460((int)(a2 + 2));
      }
      v8 = *(const char **)(this + 92);
      if ( !v8 )
        v8 = String;
      v10 = v7;
      v9 = sub_100D6390((_DWORD *)this);
      DevMsg("%s (%s) received ThrowGrenadeAtTarget input, but couldn't find target entity '%s'\n", v8, v9, v10);
    }
  }
}
