_DWORD *__cdecl sub_1012A180(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudTrain");
  if ( result )
    return (_DWORD *)sub_1012A000(result, a1);
  return result;
}
