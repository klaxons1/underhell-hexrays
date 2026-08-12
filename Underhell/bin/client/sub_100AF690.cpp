_DWORD *__cdecl sub_100AF690(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100B4090("CHudGeiger");
  if ( result )
    return (_DWORD *)sub_100AF500(result, a1);
  return result;
}
