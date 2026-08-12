int __thiscall sub_10132FD0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int result; // eax

  v1 = this + 200;
  v2 = 10;
  do
  {
    result = *v1;
    if ( *v1 )
      result = sub_10154360(*v1);
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
