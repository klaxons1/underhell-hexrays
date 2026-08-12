char __cdecl sub_100E3140(int a1, char *Str, _BYTE *a3)
{
  char result; // al
  char v4; // dl
  char v5; // cl
  char v6; // dl
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF

  result = sub_100E3030(a1, Str, &v10, &v9, &v8, &v7);
  if ( result )
  {
    v4 = v9;
    *a3 = v10;
    v5 = v8;
    a3[1] = v4;
    v6 = v7;
    a3[2] = v5;
    a3[3] = v6;
    return 1;
  }
  return result;
}
