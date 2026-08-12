int *__thiscall sub_101B9F30(_DWORD *this)
{
  int v2; // ebx
  int *result; // eax
  int i; // edi

  v2 = 0;
  do
  {
    result = (int *)this[50];
    if ( !(int *)((char *)result + this[60] + this[65] + this[85] + dword_106B9ED0) )
      break;
    Warning("Physics queue not empty, error!\n");
    ++v2;
    sub_101B7EC0((int)this);
    sub_101B9240(this);
    result = sub_101B9330((signed __int32)&dword_106B9EC0);
    for ( i = 0; i < this[85]; ++i )
      result = (int *)sub_1025FA50(*(_DWORD *)(this[82] + 4 * i));
    this[85] = 0;
  }
  while ( v2 < 20 );
  return result;
}
