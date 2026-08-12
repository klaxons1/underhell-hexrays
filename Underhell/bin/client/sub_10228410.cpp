char *__cdecl sub_10228410(float a1, int a2, char a3)
{
  double v3; // st7
  double v4; // st5
  int v5; // esi
  char *v6; // esi
  char *v7; // edi
  char *v8; // eax
  char v9; // bl
  int v10; // ecx
  char *result; // eax
  char Format[32]; // [esp+14h] [ebp-4Ch] BYREF
  char Str[32]; // [esp+34h] [ebp-2Ch] BYREF
  char Buffer[8]; // [esp+54h] [ebp-Ch] BYREF
  int v15; // [esp+5Ch] [ebp-4h]
  char *v16; // [esp+70h] [ebp+10h]

  if ( a3 )
    v3 = 1024.0;
  else
    v3 = 1000.0;
  v4 = a1;
  v5 = 32 * dword_10479708;
  dword_10479708 = ((_BYTE)dword_10479708 + 1) & 7;
  v6 = (char *)&unk_10479608 + v5;
  v16 = v6;
  if ( a1 <= v3 * v3 )
  {
    if ( v4 <= v3 )
    {
      sub_10228370(Buffer, 8u, " bytes");
    }
    else
    {
      a1 = v4 / v3;
      sub_10228370(Buffer, 8u, " KB");
    }
  }
  else
  {
    a1 = v4 / (v3 * v3);
    sub_10228370(Buffer, 8u, " MB");
  }
  v15 = (int)a1;
  if ( fabs(a1 - (double)v15) >= 0.00001 )
  {
    sub_10228370(Format, 0x20u, "%%.%if%s", a2 <= 0 ? 0 : a2, Buffer);
    sub_10228370(Str, 0x20u, Format, a1);
  }
  else
  {
    sub_10228370(Str, 0x20u, "%i%s", (int)a1, Buffer);
  }
  v7 = Str;
  v8 = strstr(Str, ".");
  if ( !v8 )
    v8 = strstr(Str, " ");
  v9 = Str[0];
  v10 = v8 - Str - 3;
  if ( Str[0] )
  {
    do
    {
      if ( v10 >= 0 && !(v10 % 3) && v6 != v16 )
        *v6++ = 44;
      ++v7;
      *v6 = v9;
      v9 = *v7;
      --v10;
      ++v6;
    }
    while ( *v7 );
    result = v16;
    *v6 = 0;
  }
  else
  {
    result = v6;
    *v6 = 0;
  }
  return result;
}
