const char *__thiscall sub_103A4CE0(_BYTE *this)
{
  const char *result; // eax

  result = "NPC_SScanner";
  if ( !this[3968] )
    return "NPC_CScanner";
  return result;
}
