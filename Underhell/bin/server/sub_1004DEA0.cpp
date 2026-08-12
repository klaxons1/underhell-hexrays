char *__usercall sub_1004DEA0@<eax>(int a1@<ecx>, float *a2@<edi>, double a3@<st0>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  float *v9; // eax
  _DWORD *v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // edx
  char *result; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  float *v17; // [esp+Ch] [ebp-40h]
  int v18; // [esp+Ch] [ebp-40h]
  float v19[12]; // [esp+18h] [ebp-34h] BYREF
  float v20; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  sub_1004B420((int (__thiscall ****)(_DWORD))a1);
  if ( (unsigned __int8)sub_1004B510((void *)a1, 100003, 1) )
  {
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v4 = *(_DWORD *)(a1 + 20);
      if ( v4 != -1 )
      {
        v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
        v6 = v4 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
        {
          if ( *v5 )
          {
            v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 ? *v5 : 0;
            if ( (*(_BYTE *)(v7 + 248) & 1) != 0 )
            {
              if ( *(_DWORD *)(sub_1026A890(a1 + 20) + 804) )
              {
                v8 = (_DWORD *)sub_1026A890(a1 + 20);
                v17 = (float *)sub_10019640(v8);
                v9 = (float *)sub_1004BF30((_DWORD *)a1);
                sub_1004BCD0(v9, v17);
                v20 = a3;
                if ( ((double (__stdcall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 2604) + 92))(10.0) >= v20 )
                {
                  sub_1004C7C0(a1);
                  sub_1004DD00(a1, (int)&savedregs, a2);
                  v18 = dword_10601DDC;
                  v10 = (_DWORD *)sub_1026A890(a1 + 20);
                  v11 = (float *)sub_10019640(v10);
                  sub_10042450(v19, v11, -1, -1.0, 0, v18);
                  v12 = sub_1026A890(a1 + 20);
                  v13 = *(_DWORD *)(a1 + 4);
                  LODWORD(v19[11]) = v12;
                  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(v13 + 2588) + 20))(
                          *(_DWORD *)(v13 + 2588),
                          v19,
                          0) )
                    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
                      *(_DWORD *)(a1 + 4),
                      "Can't refresh assault path");
                }
              }
            }
          }
        }
      }
    }
  }
  result = (char *)sub_1004CA30(a1);
  if ( (_BYTE)result )
  {
    result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 2168))(*(_DWORD *)(a1 + 4));
    if ( (_BYTE)result )
      result = sub_10023E00(*(char **)(a1 + 4), 56);
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( v15 != -1 )
  {
    result = (char *)&off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
    v16 = v15 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v16 )
    {
      if ( *(_DWORD *)result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v16 )
          result = *(char **)result;
        else
          result = 0;
        if ( *((_DWORD *)result + 212) )
          return sub_10023E00(*(char **)(a1 + 4), 50);
      }
    }
  }
  return result;
}
