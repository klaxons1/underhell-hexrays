DName *__cdecl UnDecorator::composeDeclaration(DName *a1, int *a2)
{
  int TypeEncoding; // eax
  int v3; // ebx
  bool v4; // zf
  DName *result; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  DName *v13; // eax
  DName *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // eax
  int ThisType; // eax
  _DWORD *CallingConvention; // eax
  int *v25; // eax
  int v26; // eax
  _BYTE *v27; // eax
  int v28; // eax
  int *v29; // edi
  DName *v30; // eax
  int Memory; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // eax
  BOOL v35; // esi
  int v36; // eax
  DName *v37; // eax
  DName *v38; // eax
  _BYTE *v39; // eax
  DName *v40; // eax
  DName *ThrowTypes; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  DName *v51; // eax
  int *ExternalDataType; // eax
  int v53; // eax
  int v54; // eax
  DName *v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  DName *v62; // eax
  int v63; // eax
  BOOL v64; // eax
  DName *v65; // eax
  int v66; // eax
  BOOL v67; // eax
  int v68; // eax
  int v70; // eax
  int v71; // eax
  DName *v72; // eax
  DName *v73; // eax
  _DWORD *BasedType; // [esp-4h] [ebp-68h]
  DName *ReturnType; // [esp-4h] [ebp-68h]
  DName *ArgumentTypes; // [esp-4h] [ebp-68h]
  _BYTE v77[8]; // [esp+Ch] [ebp-58h] BYREF
  _BYTE v78[8]; // [esp+14h] [ebp-50h] BYREF
  int v79; // [esp+1Ch] [ebp-48h] BYREF
  int v80; // [esp+20h] [ebp-44h]
  int v81; // [esp+24h] [ebp-40h] BYREF
  int v82; // [esp+28h] [ebp-3Ch]
  int v83; // [esp+2Ch] [ebp-38h] BYREF
  int v84; // [esp+30h] [ebp-34h]
  int v85; // [esp+34h] [ebp-30h] BYREF
  int v86; // [esp+38h] [ebp-2Ch]
  int v87; // [esp+3Ch] [ebp-28h]
  int v88; // [esp+40h] [ebp-24h]
  int v89; // [esp+44h] [ebp-20h] BYREF
  int v90; // [esp+48h] [ebp-1Ch]
  int v91; // [esp+4Ch] [ebp-18h] BYREF
  int v92; // [esp+50h] [ebp-14h]
  int v93; // [esp+54h] [ebp-10h] BYREF
  int v94; // [esp+58h] [ebp-Ch]
  BOOL v95; // [esp+5Ch] [ebp-8h]
  int v96; // [esp+60h] [ebp-4h]

  v90 &= 0xFFFF0000;
  v89 = 0;
  TypeEncoding = UnDecorator::getTypeEncoding();
  v3 = TypeEncoding;
  if ( !*a2 || (v4 = (a2[1] & 0x200) == 0, v92 = 1, v4) )
    v92 = 0;
  if ( TypeEncoding == 0xFFFF )
  {
    result = a1;
    *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
    *((_BYTE *)a1 + 4) = 2;
    *(_DWORD *)a1 = 0;
    return result;
  }
  if ( TypeEncoding == 65534 )
  {
    operator+(a1, 1, (int)a2);
    return a1;
  }
  if ( TypeEncoding != 65533 )
  {
    v96 = TypeEncoding & 0x8000;
    if ( (TypeEncoding & 0x8000) != 0 )
    {
      v94 = TypeEncoding & 0x1800;
      v95 = v94 == 2048;
      v7 = v94 == 2048 ? TypeEncoding & 0x400 : TypeEncoding & 0x1000;
      if ( !v7 || (v3 & 0x1B00) != 0x1000 )
      {
        v8 = v95 ? v3 & 0x400 : v3 & 0x1000;
        if ( !v8 || (v9 = v3 & 0x1B00, v9 != 4352) && v9 != 4608 )
        {
          if ( (v3 & 0x4000) != 0 )
          {
            if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 && (~((unsigned int)dword_10482870 >> 3) & 1) != 0 )
            {
              BasedType = UnDecorator::getBasedType(&v81);
              v10 = DName::operator=(&v83, 32);
              DName::operator+(v10, (DName *)&v79, (int)BasedType);
              v89 = v79;
              v90 = v80;
            }
            else
            {
              v11 = UnDecorator::getBasedType(&v79);
              DName::operator|=(&v89, (int)v11);
            }
          }
          if ( v95 )
            v12 = v3 & 0x400;
          else
            v12 = v3 & 0x1000;
          if ( v12 && v94 == 6144 )
          {
            UnDecorator::getDimension((int)&v79, 0);
            v13 = DName::operator+(a2, (DName *)&v83, 123);
            v14 = DName::operator+(v13, (DName *)&v81, (int)&v79);
            DName::operator+=((DName *)&v89, (int)v14);
            UnDecorator::getVCallThunkType((DName *)&v79);
            if ( (dword_10482870 & 0x1000) == 0 )
            {
              v15 = DName::operator=(&v83, 44);
              DName::operator+(v15, (DName *)&v81, (int)&v79);
              v79 = v81;
              v80 = v82;
              DName::operator+=((DName *)&v79, "}' ");
              DName::operator+=((DName *)&v89, (int)&v79);
            }
            DName::operator+=((DName *)&v89, "}'");
            UnDecorator::getCallingConvention((int)&v79);
            if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0
              && (~((unsigned int)dword_10482870 >> 4) & 1) != 0
              && (dword_10482870 & 0x1000) == 0 )
            {
              v16 = DName::operator=(&v83, 32);
              DName::operator+(v16, (DName *)&v81, (int)&v79);
              v79 = v81;
              v80 = v82;
              DName::operator+=((DName *)&v79, 32);
              v81 = v79;
              v82 = v80;
              DName::operator+=((DName *)&v81, (int)&v89);
              v17 = v81;
              v18 = v82;
              goto LABEL_39;
            }
            goto LABEL_140;
          }
          v82 &= 0xFFFF0000;
          v80 &= 0xFFFF0000;
          v94 &= 0xFFFF0000;
          v88 &= 0xFFFF0000;
          v86 &= 0xFFFF0000;
          v81 = 0;
          v79 = 0;
          v93 = 0;
          v87 = 0;
          v85 = 0;
          if ( v95 )
            v19 = v3 & 0x400;
          else
            v19 = v3 & 0x1000;
          if ( !v19 )
          {
LABEL_52:
            if ( v95 && (v3 & 0x700) != 0x200 )
            {
              if ( (dword_10482870 & 0x60) == 0x60 )
              {
                ThisType = UnDecorator::getThisType((int)&v83);
                DName::operator|=(&v85, ThisType);
              }
              else
              {
                v20 = (int *)UnDecorator::getThisType((int)&v83);
                v21 = *v20;
                v22 = v20[1];
                v85 = v21;
                v86 = v22;
              }
            }
            if ( (~((unsigned int)dword_10482870 >> 1) & 1) != 0 && (~((unsigned int)dword_10482870 >> 4) & 1) != 0 )
            {
              CallingConvention = (_DWORD *)UnDecorator::getCallingConvention((int)v78);
              v25 = (int *)DName::operator+(CallingConvention, (DName *)&v83, (int)&v89);
              v89 = *v25;
              v90 = v25[1];
            }
            else
            {
              v26 = UnDecorator::getCallingConvention((int)v78);
              DName::operator|=(&v89, v26);
            }
            if ( *a2 )
            {
              if ( !v89 || (dword_10482870 & 0x1000) != 0 )
              {
                v28 = a2[1];
                v89 = *a2;
                v90 = v28;
              }
              else
              {
                v27 = DName::operator=(v78, 32);
                DName::operator+(v27, (DName *)&v83, (int)a2);
                DName::operator+=((DName *)&v89, (int)&v83);
              }
            }
            v84 &= 0xFFFF0000;
            v29 = 0;
            v83 = 0;
            if ( v92 )
            {
              ReturnType = UnDecorator::getReturnType((DName *)v78, 0);
              v30 = DName::DName((DName *)v77, " ");
              DName::operator+(v30, (DName *)&v91, (int)ReturnType);
              DName::operator+=((DName *)&v89, (int)&v91);
              if ( (dword_10482870 & 0x1000) != 0 )
              {
LABEL_68:
                v17 = v89;
LABEL_219:
                result = a1;
                *(_DWORD *)a1 = v17;
                v6 = v90;
                goto LABEL_220;
              }
            }
            else
            {
              v29 = 0;
              Memory = _HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
              if ( Memory )
              {
                *(_DWORD *)Memory = 0;
                *(_BYTE *)(Memory + 4) = 0;
                *(_DWORD *)(Memory + 4) &= 0xFFFF00FF;
                v29 = (int *)Memory;
              }
              v32 = (int *)UnDecorator::getReturnType((DName *)v77, (struct DName *)v29);
              v33 = *v32;
              v34 = v32[1];
              v83 = v33;
              v84 = v34;
            }
            v35 = v95;
            if ( v95 )
              v36 = v3 & 0x400;
            else
              v36 = v3 & 0x1000;
            if ( !v36 )
            {
LABEL_84:
              ArgumentTypes = UnDecorator::getArgumentTypes((DName *)v77);
              v39 = DName::operator=(v78, 40);
              DName::operator+(v39, (DName *)&v81, (int)ArgumentTypes);
              v79 = v81;
              v80 = v82;
              DName::operator+=((DName *)&v79, 41);
              DName::operator+=((DName *)&v89, (int)&v79);
              if ( v35 && (v3 & 0x700) != 0x200 )
                DName::operator+=((DName *)&v89, (int)&v85);
              if ( (dword_10482870 & 0x100) != 0 )
              {
                ThrowTypes = UnDecorator::getThrowTypes((DName *)v77);
                DName::operator|=(&v89, (int)ThrowTypes);
              }
              else
              {
                v40 = UnDecorator::getThrowTypes((DName *)v77);
                DName::operator+=((DName *)&v89, (int)v40);
              }
              if ( (~((unsigned int)dword_10482870 >> 2) & 1) != 0 && v29 )
              {
                v17 = v83;
                *v29 = v89;
                v29[1] = v90;
                v89 = v17;
                v90 = v84;
                goto LABEL_141;
              }
LABEL_140:
              v17 = v89;
LABEL_141:
              if ( v96 )
                v53 = (v3 & 0x1800) - 2048;
              else
                v53 = v3 & 0x6000;
              if ( v53 )
                goto LABEL_208;
              if ( (~((unsigned int)dword_10482870 >> 9) & 1) != 0 )
              {
                if ( v96 )
                  v54 = (v3 & 0x1800) - 2048;
                else
                  v54 = v3 & 0x6000;
                if ( !v54 && (!v96 || (v3 & 0x700) == 512) )
                {
                  v56 = DName::DName((DName *)v77, "static ");
                  DName::operator+(v56, (DName *)&v79, (int)&v89);
                  v17 = v79;
                  v89 = v79;
                  v90 = v80;
                }
                if ( v96 )
                {
                  if ( (v3 & 0x700) == 0x100 )
                  {
LABEL_178:
                    v62 = DName::DName((DName *)v77, "virtual ");
                    DName::operator+(v62, (DName *)&v79, (int)&v89);
                    v17 = v79;
                    v89 = v79;
                    v90 = v80;
                    goto LABEL_179;
                  }
                  v57 = (v3 & 0x1800) - 2048;
                }
                else
                {
                  v57 = v3 & 0x6000;
                }
                if ( v57 )
                  v58 = v3 & 0x1000;
                else
                  v58 = v3 & 0x400;
                if ( v58 )
                {
                  v59 = v96 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
                  if ( !v59 && (v3 & 0x700) == 0x500 )
                    goto LABEL_178;
                  v60 = v96 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
                  if ( !v60 && (v3 & 0x700) == 0x600 )
                    goto LABEL_178;
                  v61 = v96 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
                  if ( !v61 && (v3 & 0x700) == 0x400 )
                    goto LABEL_178;
                }
              }
LABEL_179:
              if ( (~((unsigned int)dword_10482870 >> 7) & 1) != 0 )
              {
                if ( v96 )
                  v63 = (v3 & 0x1800) - 2048;
                else
                  v63 = v3 & 0x6000;
                if ( v63 || (!v96 ? (v64 = (v3 & 0x1800) == 2048) : (v64 = (v3 & 0xC0) == 64), !v64) )
                {
                  if ( v96 )
                    v66 = (v3 & 0x1800) - 2048;
                  else
                    v66 = v3 & 0x6000;
                  if ( v66 || (!v96 ? (v67 = (v3 & 0x1800) == 4096) : (v67 = (v3 & 0xC0) == 0x80), !v67) )
                  {
                    if ( v96 )
                      v68 = (v3 & 0x1800) - 2048;
                    else
                      v68 = v3 & 0x6000;
                    if ( v68 )
                      goto LABEL_208;
                    if ( !(v96 ? (v3 & 0xC0) == 0 : (v3 & 0x1800) == 0) )
                      goto LABEL_208;
                    v65 = DName::DName((DName *)v77, "public: ");
                  }
                  else
                  {
                    v65 = DName::DName((DName *)v77, "protected: ");
                  }
                }
                else
                {
                  v65 = DName::DName((DName *)v77, "private: ");
                }
                DName::operator+(v65, (DName *)&v79, (int)&v89);
                v17 = v79;
                v89 = v79;
                v90 = v80;
              }
LABEL_208:
              if ( v96 )
                v70 = (v3 & 0x1800) - 2048;
              else
                v70 = v3 & 0x6000;
              if ( v70 )
                v71 = v3 & 0x1000;
              else
                v71 = v3 & 0x400;
              if ( v71 && (dword_10482870 & 0x1000) == 0 )
              {
                v72 = DName::DName((DName *)v77, "[thunk]:");
                DName::operator+(v72, (DName *)&v79, (int)&v89);
                v17 = v79;
                v89 = v79;
                v90 = v80;
              }
              if ( (v3 & 0x10000) != 0 )
              {
                v73 = DName::DName((DName *)v77, "extern \"C\" ");
                DName::operator+(v73, (DName *)&v79, (int)&v89);
                v17 = v79;
                v90 = v80;
              }
              goto LABEL_219;
            }
            if ( v95 )
            {
              if ( (v3 & 0x700) == 0x600 )
              {
                v37 = DName::DName((DName *)v77, "`vtordispex{");
                DName::operator+(v37, (DName *)&v91, (int)&v81);
                v81 = v91;
                v82 = v92;
                DName::operator+=((DName *)&v81, 44);
                v91 = v81;
                v92 = v82;
                DName::operator+=((DName *)&v91, (int)&v79);
                v79 = v91;
                v80 = v92;
                DName::operator+=((DName *)&v79, 44);
                v81 = v79;
                v82 = v80;
                DName::operator+=((DName *)&v81, (int)&v93);
LABEL_81:
                v79 = v81;
                v80 = v82;
                DName::operator+=((DName *)&v79, 44);
                DName::operator+=((DName *)&v89, (int)&v79);
LABEL_83:
                v79 = v87;
                v80 = v88;
                DName::operator+=((DName *)&v79, "}' ");
                DName::operator+=((DName *)&v89, (int)&v79);
                goto LABEL_84;
              }
              if ( (v3 & 0x700) == 0x500 )
              {
                v38 = DName::DName((DName *)v77, "`vtordisp{");
                DName::operator+(v38, (DName *)&v81, (int)&v93);
                goto LABEL_81;
              }
            }
            DName::operator+=((DName *)&v89, "`adjustor{");
            goto LABEL_83;
          }
          if ( v95 )
          {
            if ( (v3 & 0x700) == 0x600 )
            {
              UnDecorator::getDimension((int)&v83, 1);
              v81 = v83;
              v82 = v84;
              UnDecorator::getDimension((int)&v83, 1);
              v79 = v83;
              v80 = v84;
              UnDecorator::getDimension((int)&v83, 1);
LABEL_50:
              v93 = v83;
              v94 = v84;
              goto LABEL_51;
            }
            if ( (v3 & 0x700) == 0x500 )
            {
              UnDecorator::getDimension((int)&v83, 1);
              goto LABEL_50;
            }
          }
LABEL_51:
          UnDecorator::getDimension((int)&v83, 1);
          v87 = v83;
          v88 = v84;
          goto LABEL_52;
        }
      }
    }
    DName::operator+=((DName *)&v89, (int)a2);
    if ( v96 )
    {
      v42 = (v3 & 0x1800) - 2048;
    }
    else
    {
      switch ( v3 & 0x7C00 )
      {
        case 26624:
        case 28672:
          UnDecorator::getVfTableType(a1, &v89);
          return a1;
        case 24576:
          UnDecorator::getDimension((int)&v83, v96);
          v79 = v89;
          v80 = v90;
          DName::operator+=((DName *)&v79, 123);
          v81 = v79;
          v82 = v80;
          DName::operator+=((DName *)&v81, (int)&v83);
          DName::operator+(&v81, a1, "}'");
          return a1;
        case 31744:
          UnDecorator::getVdispMapType(a1, &v89);
          return a1;
      }
      v42 = v3 & 0x6000;
    }
    if ( v42 )
      v43 = v3 & 0x1000;
    else
      v43 = v3 & 0x400;
    if ( v43 && v96 != 0 && (v3 & 0x1B00) == 4096 )
    {
      DName::operator+=((DName *)&v89, "`local static destructor helper'");
    }
    else
    {
      if ( v96 )
        v44 = (v3 & 0x1800) - 2048;
      else
        v44 = v3 & 0x6000;
      if ( v44 )
        v45 = v3 & 0x1000;
      else
        v45 = v3 & 0x400;
      if ( v45 && v96 != 0 && (v3 & 0x1B00) == 4352 )
      {
        DName::operator+=((DName *)&v89, "`template static data member constructor helper'");
      }
      else
      {
        if ( v96 )
          v46 = (v3 & 0x1800) - 2048;
        else
          v46 = v3 & 0x6000;
        if ( v46 )
          v47 = v3 & 0x1000;
        else
          v47 = v3 & 0x400;
        if ( v47 && v96 != 0 && (v3 & 0x1B00) == 4608 )
        {
          DName::operator+=((DName *)&v89, "`template static data member destructor helper'");
        }
        else
        {
          if ( v96 )
            goto LABEL_130;
          if ( (v3 & 0x7C00) == 0x7800 )
            goto LABEL_68;
        }
      }
    }
    if ( !v96 )
    {
      v48 = v3 & 0x6000;
      goto LABEL_132;
    }
LABEL_130:
    v48 = (v3 & 0x1800) - 2048;
LABEL_132:
    if ( v48 )
      v49 = v3 & 0x1000;
    else
      v49 = v3 & 0x400;
    if ( !v49 || (v50 = v3 & 0x1B00, v96 == 0 || v50 != 4352) && (v96 == 0 || v50 != 4608) )
    {
      ExternalDataType = (int *)UnDecorator::getExternalDataType(v77, &v89);
      v17 = *ExternalDataType;
      v89 = *ExternalDataType;
      v18 = ExternalDataType[1];
      goto LABEL_40;
    }
    v51 = DName::DName((DName *)v77, " ");
    DName::operator+(v51, (DName *)&v79, (int)&v89);
    v17 = v79;
    v18 = v80;
LABEL_39:
    v89 = v17;
LABEL_40:
    v90 = v18;
    goto LABEL_141;
  }
  result = a1;
  *(_DWORD *)a1 = *a2;
  v6 = a2[1];
LABEL_220:
  *((_DWORD *)result + 1) = v6;
  return result;
}
