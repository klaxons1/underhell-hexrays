void __thiscall sub_102BFC40(_DWORD *this, const char *ArgList, char a3)
{
  int v4; // eax

  sub_1015F220(this, ArgList, a3);
  if ( a3 )
  {
    v4 = sub_10261B20();
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 264))(v4) )
        sub_1015EFA0((int)this, "%I64u game loaded with living player\n", ++*(_QWORD *)(this[23] + 328));
    }
  }
}
