DName *__cdecl UnDecorator::getFunctionIndirectType(DName *a1, int *a2)
{
  char v2; // cl
  DName *result; // eax
  int v4; // ebx
  char *v5; // eax
  bool v6; // cc
  DName *v7; // eax
  _BYTE *v8; // eax
  int v9; // eax
  int **v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  _BYTE *v14; // eax
  int ThisType; // eax
  int **v16; // eax
  _DWORD *BasedType; // eax
  _DWORD *CallingConvention; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  _BYTE *v23; // eax
  int Memory; // eax
  int *v25; // esi
  _BYTE *v26; // eax
  DName *v27; // eax
  DName *ThrowTypes; // eax
  int Scope; // [esp-10h] [ebp-48h]
  _DWORD *v30; // [esp-10h] [ebp-48h]
  DName *ArgumentTypes; // [esp-10h] [ebp-48h]
  int *v32[2]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v33[8]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v34[2]; // [esp+10h] [ebp-28h] BYREF
  int v35; // [esp+18h] [ebp-20h] BYREF
  int v36; // [esp+1Ch] [ebp-1Ch]
  int v37; // [esp+20h] [ebp-18h] BYREF
  int v38; // [esp+24h] [ebp-14h]
  int v39; // [esp+28h] [ebp-10h] BYREF
  int v40; // [esp+2Ch] [ebp-Ch]
  int v41; // [esp+30h] [ebp-8h] BYREF
  int v42; // [esp+34h] [ebp-4h]

  v2 = *dword_10482860;
  if ( !*dword_10482860 )
  {
    operator+(a1, 1, (int)a2);
    return a1;
  }
  if ( (v2 < 54 || v2 > 57) && v2 != 95 )
  {
    result = a1;
    *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
    *(_DWORD *)a1 = 0;
    *((_BYTE *)a1 + 4) = 2;
    return result;
  }
  v4 = v2 - 54;
  v5 = ++dword_10482860;
  if ( v2 == 95 )
  {
    if ( !*v5 )
    {
      operator+(a1, 1, (int)a2);
      return a1;
    }
    v4 = *v5 - 61;
    dword_10482860 = v5 + 1;
    if ( v4 >= 4 )
    {
      v6 = v4 <= 7;
      goto LABEL_14;
    }
  }
  else if ( v4 >= 0 )
  {
    v6 = v4 <= 3;
LABEL_14:
    if ( v6 )
      goto LABEL_16;
  }
  v4 = -1;
LABEL_16:
  if ( v4 == -1 )
  {
    result = a1;
    *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
    *(_DWORD *)a1 = 0;
    *((_BYTE *)a1 + 4) = 2;
    return result;
  }
  v39 = 0;
  v40 &= 0xFFFF0000;
  v41 = *a2;
  v42 = a2[1];
  if ( (v4 & 2) != 0 )
  {
    v7 = DName::DName((DName *)&v35, "::");
    DName::operator+(v7, (DName *)&v37, (int)&v41);
    v41 = v37;
    v42 = v38;
    if ( *dword_10482860 )
    {
      Scope = UnDecorator::getScope((int)v33);
      v8 = DName::operator=(v32, 32);
      DName::operator+(v8, (DName *)&v35, Scope);
      v37 = v35;
      v38 = v36;
      DName::operator+=((DName *)&v37, (int)&v41);
      v41 = v37;
      v9 = v38;
    }
    else
    {
      v10 = DName::DName(v32, 1);
      DName::operator+(v10, (DName *)&v35, (int)&v41);
      v41 = v35;
      v9 = v36;
    }
    v42 = v9;
    if ( !*dword_10482860 )
    {
      v16 = DName::DName(v32, 1);
      DName::operator+(v16, a1, (int)&v41);
      return a1;
    }
    if ( *dword_10482860 != 64 )
    {
      result = a1;
      *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
      *(_DWORD *)a1 = 0;
      *((_BYTE *)a1 + 4) = 2;
      return result;
    }
    ++dword_10482860;
    if ( (dword_10482870 & 0x60) == 0x60 )
    {
      ThisType = UnDecorator::getThisType((int)v32);
      DName::operator|=(&v39, ThisType);
    }
    else
    {
      v11 = (int *)UnDecorator::getThisType((int)v32);
      v12 = *v11;
      v13 = v11[1];
      v39 = v12;
      v40 = v13;
    }
  }
  if ( (v4 & 4) != 0 )
  {
    if ( (dword_10482870 & 2) != 0 )
    {
      BasedType = UnDecorator::getBasedType(v32);
      DName::operator|=(&v41, (int)BasedType);
    }
    else
    {
      v30 = UnDecorator::getBasedType(v32);
      v14 = DName::operator=(v33, 32);
      DName::operator+(v14, (DName *)&v35, (int)v30);
      v37 = v35;
      v38 = v36;
      DName::operator+=((DName *)&v37, (int)&v41);
      v41 = v37;
      v42 = v38;
    }
  }
  if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 )
  {
    CallingConvention = (_DWORD *)UnDecorator::getCallingConvention((int)v33);
    v19 = (int *)DName::operator+(CallingConvention, (DName *)v32, (int)&v41);
    v20 = *v19;
    v21 = v19[1];
    v41 = v20;
    v42 = v21;
  }
  else
  {
    v22 = UnDecorator::getCallingConvention((int)v32);
    DName::operator|=(&v41, v22);
  }
  if ( *a2 )
  {
    v23 = DName::operator=(v32, 40);
    DName::operator+(v23, (DName *)&v35, (int)&v41);
    v37 = v35;
    v38 = v36;
    DName::operator+=((DName *)&v37, 41);
    v41 = v37;
    v42 = v38;
  }
  Memory = _HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
  if ( Memory )
  {
    *(_BYTE *)(Memory + 4) = 0;
    *(_DWORD *)(Memory + 4) &= 0xFFFF00FF;
    *(_DWORD *)Memory = 0;
    v25 = (int *)Memory;
  }
  else
  {
    v25 = 0;
  }
  UnDecorator::getReturnType((DName *)v34, (struct DName *)v25);
  ArgumentTypes = UnDecorator::getArgumentTypes((DName *)v32);
  v26 = DName::operator=(v33, 40);
  DName::operator+(v26, (DName *)&v35, (int)ArgumentTypes);
  v37 = v35;
  v38 = v36;
  DName::operator+=((DName *)&v37, 41);
  DName::operator+=((DName *)&v41, (int)&v37);
  if ( (dword_10482870 & 0x60) != 0x60 && (v4 & 2) != 0 )
    DName::operator+=((DName *)&v41, (int)&v39);
  if ( (dword_10482870 & 0x100) != 0 )
  {
    ThrowTypes = UnDecorator::getThrowTypes((DName *)v32);
    DName::operator|=(&v41, (int)ThrowTypes);
  }
  else
  {
    v27 = UnDecorator::getThrowTypes((DName *)v32);
    DName::operator+=((DName *)&v41, (int)v27);
  }
  if ( v25 )
  {
    *v25 = v41;
    v25[1] = v42;
    result = a1;
    *(_DWORD *)a1 = v34[0];
    *((_DWORD *)a1 + 1) = v34[1];
    return result;
  }
  DName::DName((int **)a1, 3);
  return a1;
}
