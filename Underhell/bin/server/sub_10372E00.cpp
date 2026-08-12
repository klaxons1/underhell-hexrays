int __thiscall sub_10372E00(char *this)
{
  if ( *((_DWORD *)this + 581) != 3 )
    return sub_10033590(this);
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this) )
  {
    sub_10023D10(this, 30);
    return sub_10033590(this);
  }
  if ( !sub_10023D10(this, 30) && !*(_DWORD *)(dword_106E91D4 + 48) )
    sub_10023CB0(this, 73);
  return 2;
}
