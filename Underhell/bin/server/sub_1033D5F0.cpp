int __thiscall sub_1033D5F0(char *this)
{
  int v3; // edi
  int v4; // eax

  if ( *((_DWORD *)this + 581) != 3 )
    return sub_10033590(this);
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this) )
  {
    if ( sub_10023D10(this, 30) )
    {
      v3 = *(_DWORD *)this;
      v4 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
      (*(void (__thiscall **)(char *, int))(v3 + 2348))(this, v4);
    }
    return sub_10033590(this);
  }
  if ( !sub_10023D10(this, 30) )
    sub_10023CB0(this, 75);
  return 2;
}
