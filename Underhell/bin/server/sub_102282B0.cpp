_BYTE *__thiscall sub_102282B0(int this)
{
  int v2; // ecx
  _BYTE *result; // eax
  char v4; // [esp+7h] [ebp-1h] BYREF

  if ( *(_BYTE *)(this + 884) && *(_BYTE *)(this + 885) )
  {
    v2 = *(_DWORD *)(this + 976);
    if ( v2 )
    {
      sub_1041E040(v2);
      v4 = 0;
      result = sub_102275B0((_BYTE *)(this + 885), &v4);
      *(_BYTE *)(this + 924) = 0;
    }
  }
  return result;
}
