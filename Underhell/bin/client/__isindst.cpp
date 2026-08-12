int __cdecl _isindst(_DWORD *a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  _lock(6);
  v2 = _isindst_nolock(a1);
  _unlock(6);
  return v2;
}
