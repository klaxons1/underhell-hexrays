_DWORD *__thiscall sub_10085F70(void *this)
{
  _DWORD *result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  for ( result = (_DWORD *)sub_100709F0(&v2); result; result = (_DWORD *)sub_10070A20((int *)&v2) )
    sub_100700E0(result);
  return result;
}
