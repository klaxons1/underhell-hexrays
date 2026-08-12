_BYTE *__cdecl sub_10264FB0(_BYTE *a1, char *Source)
{
  _BYTE *result; // eax
  char v3; // cl
  char v4; // dl
  char v5; // cl
  int v6; // [esp+0h] [ebp-10h] BYREF
  char v7; // [esp+4h] [ebp-Ch]
  char v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  sub_10264F30((int)&v6, 4, Source);
  result = a1;
  v3 = v7;
  *a1 = v6;
  v4 = v8;
  a1[1] = v3;
  v5 = v9;
  a1[2] = v4;
  a1[3] = v5;
  return result;
}
