unsigned int __usercall _raise_exc_ex@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        unsigned int *a3,
        DWORD dwExceptionCode,
        int a5,
        float *a6,
        float *a7,
        int a8)
{
  char v8; // cl
  unsigned int *v9; // esi
  char v10; // al
  int v11; // eax
  unsigned int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int *v15; // eax
  unsigned int v16; // ecx
  float *v17; // edi
  __int16 v18; // fps
  ULONG_PTR v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int result; // eax

  v8 = dwExceptionCode;
  *(_DWORD *)(Arguments + 4) = 0;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  if ( (v8 & 0x10) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 1u;
    dwExceptionCode = -1073741681;
  }
  if ( (v8 & 2) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 2u;
    dwExceptionCode = -1073741677;
  }
  if ( (v8 & 1) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 4u;
    dwExceptionCode = -1073741679;
  }
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 8u;
    dwExceptionCode = -1073741682;
  }
  if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(Arguments + 4) |= 0x10u;
    dwExceptionCode = -1073741680;
  }
  v9 = a3;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a3)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v9)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 5)) & 1;
  v10 = _statfp(a1);
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v10 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v10 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v10 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v11 = *v9 & 0xC00;
  switch ( v11 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v12 = v13;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
  }
  v14 = *v9 & 0x300;
  switch ( v14 )
  {
    case 0:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v15 = v16;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a5)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  v17 = a7;
  if ( a8 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v17;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v17;
  }
  _clrfp(v18);
  RaiseException(dwExceptionCode, 0, 1u, &Arguments);
  v22 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v9 &= ~1u;
  if ( (*(_BYTE *)(v22 + 8) & 8) != 0 )
    *v9 &= ~4u;
  if ( (*(_BYTE *)(v22 + 8) & 4) != 0 )
    *v9 &= ~8u;
  if ( (*(_BYTE *)(v22 + 8) & 2) != 0 )
    *v9 &= ~0x10u;
  if ( (*(_BYTE *)(v22 + 8) & 1) != 0 )
    *v9 &= ~0x20u;
  v23 = *(_DWORD *)v22 & 3;
  if ( !v23 )
  {
    *v9 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v26 = *v9 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v26 = *v9 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v9 = v26;
    goto LABEL_59;
  }
  if ( v25 == 1 )
    *v9 |= 0xC00u;
LABEL_59:
  v27 = (*(_DWORD *)v22 >> 2) & 7;
  if ( !v27 )
  {
    result = *v9 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    result = *v9 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v9 = result;
    goto LABEL_66;
  }
  result = v28 - 1;
  if ( !result )
    *v9 &= 0xFFFFF3FF;
LABEL_66:
  if ( a8 )
    *v17 = *(float *)(v22 + 80);
  else
    *(double *)v17 = *(double *)(v22 + 80);
  return result;
}
