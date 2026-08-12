void __thiscall sub_102FED00(int this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  _DWORD *v5; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 264))(this) )
  {
    v3 = (char **)(a2 + 2);
    if ( a2[6] == 2 )
    {
      v4 = *v3;
      if ( !*v3 )
        v4 = (char *)String;
    }
    else
    {
      v4 = (char *)sub_1010D460((int)v3);
    }
    v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
    if ( v5 )
    {
      *(_DWORD *)(this + 4104) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
      sub_10023CB0((char *)this, 77);
      sub_102FC860(this, 0);
    }
  }
}
