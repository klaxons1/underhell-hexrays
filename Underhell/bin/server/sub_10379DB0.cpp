int __thiscall sub_10379DB0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  const char *v6; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 264))(this);
  if ( (_BYTE)result )
  {
    v4 = a2;
    if ( a2 )
    {
      result = sub_10050FC0(this + 1073);
      if ( result != v4 )
      {
        v5 = *(_DWORD *)(v4 + 260);
        this[1043] = v5;
        if ( !v5 )
          this[1043] = *sub_10162BE0(&a2, "unnamed_strider");
        return sub_10377330((int)(this + 1073), v4, 0);
      }
    }
    else
    {
      v6 = (const char *)this[1043];
      if ( !v6 )
        v6 = String;
      DevWarning("Hunter set to follow entity %s that is not a strider\n", v6);
      result = *sub_10162BE0(&a2, "unknown_strider");
      this[1043] = result;
    }
  }
  return result;
}
