_BYTE *__thiscall sub_102F3780(_DWORD *this)
{
  _BYTE *result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  result = *(_BYTE **)(*(int (__thiscall **)(_DWORD *, int *))(*this + 28))(this, &v3);
  if ( !result || !*result )
  {
    this[115] = *sub_10162BE0(&v3, "models/alyx.mdl");
    return (_BYTE *)sub_100D8500(this);
  }
  return result;
}
