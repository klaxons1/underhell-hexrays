char *__thiscall sub_100390B0(char **this, const char *a2)
{
  char *v4; // eax
  char *v5; // ecx
  char *v6; // edi
  char *v7; // edx
  char v8; // al
  char *v9; // edi
  char *v10; // eax
  char *v11; // ecx
  int v12; // eax
  char **v13; // eax
  char *v15; // [esp+14h] [ebp+8h]

  v4 = (char *)sub_10184390(&this[1][strlen(a2) + 1]);
  v5 = *this;
  v6 = v4;
  v15 = v4;
  v7 = v4;
  do
  {
    v8 = *v5;
    *v7++ = *v5++;
  }
  while ( v8 );
  strcat(v6, a2);
  v9 = this[5];
  v10 = this[3];
  if ( (int)(v9 + 1) > (int)v10 )
    sub_102ABFC0(v9 - v10 + 1);
  ++this[5];
  v11 = this[2];
  v12 = this[5] - v9 - 1;
  this[6] = v11;
  if ( v12 > 0 )
    memcpy(&v11[4 * (_DWORD)v9 + 4], &v11[4 * (_DWORD)v9], 4 * v12);
  v13 = (char **)&this[2][4 * (_DWORD)v9];
  if ( v13 )
    *v13 = v15;
  return v15;
}
