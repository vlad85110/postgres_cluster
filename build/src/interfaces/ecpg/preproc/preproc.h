/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_PREPROC_H_INCLUDED
# define YY_BASE_YY_PREPROC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SQL_ALLOCATE = 258,            /* SQL_ALLOCATE  */
    SQL_AUTOCOMMIT = 259,          /* SQL_AUTOCOMMIT  */
    SQL_BOOL = 260,                /* SQL_BOOL  */
    SQL_BREAK = 261,               /* SQL_BREAK  */
    SQL_CARDINALITY = 262,         /* SQL_CARDINALITY  */
    SQL_CONNECT = 263,             /* SQL_CONNECT  */
    SQL_COUNT = 264,               /* SQL_COUNT  */
    SQL_DATETIME_INTERVAL_CODE = 265, /* SQL_DATETIME_INTERVAL_CODE  */
    SQL_DATETIME_INTERVAL_PRECISION = 266, /* SQL_DATETIME_INTERVAL_PRECISION  */
    SQL_DESCRIBE = 267,            /* SQL_DESCRIBE  */
    SQL_DESCRIPTOR = 268,          /* SQL_DESCRIPTOR  */
    SQL_DISCONNECT = 269,          /* SQL_DISCONNECT  */
    SQL_FOUND = 270,               /* SQL_FOUND  */
    SQL_FREE = 271,                /* SQL_FREE  */
    SQL_GET = 272,                 /* SQL_GET  */
    SQL_GO = 273,                  /* SQL_GO  */
    SQL_GOTO = 274,                /* SQL_GOTO  */
    SQL_IDENTIFIED = 275,          /* SQL_IDENTIFIED  */
    SQL_INDICATOR = 276,           /* SQL_INDICATOR  */
    SQL_KEY_MEMBER = 277,          /* SQL_KEY_MEMBER  */
    SQL_LENGTH = 278,              /* SQL_LENGTH  */
    SQL_LONG = 279,                /* SQL_LONG  */
    SQL_NULLABLE = 280,            /* SQL_NULLABLE  */
    SQL_OCTET_LENGTH = 281,        /* SQL_OCTET_LENGTH  */
    SQL_OPEN = 282,                /* SQL_OPEN  */
    SQL_OUTPUT = 283,              /* SQL_OUTPUT  */
    SQL_REFERENCE = 284,           /* SQL_REFERENCE  */
    SQL_RETURNED_LENGTH = 285,     /* SQL_RETURNED_LENGTH  */
    SQL_RETURNED_OCTET_LENGTH = 286, /* SQL_RETURNED_OCTET_LENGTH  */
    SQL_SCALE = 287,               /* SQL_SCALE  */
    SQL_SECTION = 288,             /* SQL_SECTION  */
    SQL_SHORT = 289,               /* SQL_SHORT  */
    SQL_SIGNED = 290,              /* SQL_SIGNED  */
    SQL_SQLERROR = 291,            /* SQL_SQLERROR  */
    SQL_SQLPRINT = 292,            /* SQL_SQLPRINT  */
    SQL_SQLWARNING = 293,          /* SQL_SQLWARNING  */
    SQL_START = 294,               /* SQL_START  */
    SQL_STOP = 295,                /* SQL_STOP  */
    SQL_STRUCT = 296,              /* SQL_STRUCT  */
    SQL_UNSIGNED = 297,            /* SQL_UNSIGNED  */
    SQL_VAR = 298,                 /* SQL_VAR  */
    SQL_WHENEVER = 299,            /* SQL_WHENEVER  */
    S_ADD = 300,                   /* S_ADD  */
    S_AND = 301,                   /* S_AND  */
    S_ANYTHING = 302,              /* S_ANYTHING  */
    S_AUTO = 303,                  /* S_AUTO  */
    S_CONST = 304,                 /* S_CONST  */
    S_DEC = 305,                   /* S_DEC  */
    S_DIV = 306,                   /* S_DIV  */
    S_DOTPOINT = 307,              /* S_DOTPOINT  */
    S_EQUAL = 308,                 /* S_EQUAL  */
    S_EXTERN = 309,                /* S_EXTERN  */
    S_INC = 310,                   /* S_INC  */
    S_LSHIFT = 311,                /* S_LSHIFT  */
    S_MEMPOINT = 312,              /* S_MEMPOINT  */
    S_MEMBER = 313,                /* S_MEMBER  */
    S_MOD = 314,                   /* S_MOD  */
    S_MUL = 315,                   /* S_MUL  */
    S_NEQUAL = 316,                /* S_NEQUAL  */
    S_OR = 317,                    /* S_OR  */
    S_REGISTER = 318,              /* S_REGISTER  */
    S_RSHIFT = 319,                /* S_RSHIFT  */
    S_STATIC = 320,                /* S_STATIC  */
    S_SUB = 321,                   /* S_SUB  */
    S_VOLATILE = 322,              /* S_VOLATILE  */
    S_TYPEDEF = 323,               /* S_TYPEDEF  */
    CSTRING = 324,                 /* CSTRING  */
    CVARIABLE = 325,               /* CVARIABLE  */
    CPP_LINE = 326,                /* CPP_LINE  */
    IP = 327,                      /* IP  */
    IDENT = 328,                   /* IDENT  */
    UIDENT = 329,                  /* UIDENT  */
    FCONST = 330,                  /* FCONST  */
    SCONST = 331,                  /* SCONST  */
    USCONST = 332,                 /* USCONST  */
    BCONST = 333,                  /* BCONST  */
    XCONST = 334,                  /* XCONST  */
    Op = 335,                      /* Op  */
    ICONST = 336,                  /* ICONST  */
    PARAM = 337,                   /* PARAM  */
    TYPECAST = 338,                /* TYPECAST  */
    DOT_DOT = 339,                 /* DOT_DOT  */
    COLON_EQUALS = 340,            /* COLON_EQUALS  */
    EQUALS_GREATER = 341,          /* EQUALS_GREATER  */
    LESS_EQUALS = 342,             /* LESS_EQUALS  */
    GREATER_EQUALS = 343,          /* GREATER_EQUALS  */
    NOT_EQUALS = 344,              /* NOT_EQUALS  */
    ABORT_P = 345,                 /* ABORT_P  */
    ABSOLUTE_P = 346,              /* ABSOLUTE_P  */
    ACCESS = 347,                  /* ACCESS  */
    ACTION = 348,                  /* ACTION  */
    ADD_P = 349,                   /* ADD_P  */
    ADMIN = 350,                   /* ADMIN  */
    AFTER = 351,                   /* AFTER  */
    AGGREGATE = 352,               /* AGGREGATE  */
    ALL = 353,                     /* ALL  */
    ALSO = 354,                    /* ALSO  */
    ALTER = 355,                   /* ALTER  */
    ALWAYS = 356,                  /* ALWAYS  */
    ANALYSE = 357,                 /* ANALYSE  */
    ANALYZE = 358,                 /* ANALYZE  */
    AND = 359,                     /* AND  */
    ANY = 360,                     /* ANY  */
    ARRAY = 361,                   /* ARRAY  */
    AS = 362,                      /* AS  */
    ASC = 363,                     /* ASC  */
    ASSERTION = 364,               /* ASSERTION  */
    ASSIGNMENT = 365,              /* ASSIGNMENT  */
    ASYMMETRIC = 366,              /* ASYMMETRIC  */
    AT = 367,                      /* AT  */
    ATTACH = 368,                  /* ATTACH  */
    ATTRIBUTE = 369,               /* ATTRIBUTE  */
    AUTHORIZATION = 370,           /* AUTHORIZATION  */
    BACKWARD = 371,                /* BACKWARD  */
    BEFORE = 372,                  /* BEFORE  */
    BEGIN_P = 373,                 /* BEGIN_P  */
    BETWEEN = 374,                 /* BETWEEN  */
    BIGINT = 375,                  /* BIGINT  */
    BINARY = 376,                  /* BINARY  */
    BIT = 377,                     /* BIT  */
    BOOLEAN_P = 378,               /* BOOLEAN_P  */
    BOTH = 379,                    /* BOTH  */
    BY = 380,                      /* BY  */
    CACHE = 381,                   /* CACHE  */
    CALL = 382,                    /* CALL  */
    CALLED = 383,                  /* CALLED  */
    CASCADE = 384,                 /* CASCADE  */
    CASCADED = 385,                /* CASCADED  */
    CASE = 386,                    /* CASE  */
    CAST = 387,                    /* CAST  */
    CATALOG_P = 388,               /* CATALOG_P  */
    CHAIN = 389,                   /* CHAIN  */
    CHAR_P = 390,                  /* CHAR_P  */
    CHARACTER = 391,               /* CHARACTER  */
    CHARACTERISTICS = 392,         /* CHARACTERISTICS  */
    CHECK = 393,                   /* CHECK  */
    CHECKPOINT = 394,              /* CHECKPOINT  */
    CLASS = 395,                   /* CLASS  */
    CLOSE = 396,                   /* CLOSE  */
    CLUSTER = 397,                 /* CLUSTER  */
    COALESCE = 398,                /* COALESCE  */
    COLLATE = 399,                 /* COLLATE  */
    COLLATION = 400,               /* COLLATION  */
    COLUMN = 401,                  /* COLUMN  */
    COLUMNS = 402,                 /* COLUMNS  */
    COMMENT = 403,                 /* COMMENT  */
    COMMENTS = 404,                /* COMMENTS  */
    COMMIT = 405,                  /* COMMIT  */
    COMMITTED = 406,               /* COMMITTED  */
    CONCURRENTLY = 407,            /* CONCURRENTLY  */
    CONFIGURATION = 408,           /* CONFIGURATION  */
    CONFLICT = 409,                /* CONFLICT  */
    CONNECTION = 410,              /* CONNECTION  */
    CONSTRAINT = 411,              /* CONSTRAINT  */
    CONSTRAINTS = 412,             /* CONSTRAINTS  */
    CONTENT_P = 413,               /* CONTENT_P  */
    CONTINUE_P = 414,              /* CONTINUE_P  */
    CONVERSION_P = 415,            /* CONVERSION_P  */
    COPY = 416,                    /* COPY  */
    COST = 417,                    /* COST  */
    CREATE = 418,                  /* CREATE  */
    CROSS = 419,                   /* CROSS  */
    CSV = 420,                     /* CSV  */
    CUBE = 421,                    /* CUBE  */
    CURRENT_P = 422,               /* CURRENT_P  */
    CURRENT_CATALOG = 423,         /* CURRENT_CATALOG  */
    CURRENT_DATE = 424,            /* CURRENT_DATE  */
    CURRENT_ROLE = 425,            /* CURRENT_ROLE  */
    CURRENT_SCHEMA = 426,          /* CURRENT_SCHEMA  */
    CURRENT_TIME = 427,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 428,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 429,            /* CURRENT_USER  */
    CURSOR = 430,                  /* CURSOR  */
    CYCLE = 431,                   /* CYCLE  */
    DATA_P = 432,                  /* DATA_P  */
    DATABASE = 433,                /* DATABASE  */
    DAY_P = 434,                   /* DAY_P  */
    DEALLOCATE = 435,              /* DEALLOCATE  */
    DEC = 436,                     /* DEC  */
    DECIMAL_P = 437,               /* DECIMAL_P  */
    DECLARE = 438,                 /* DECLARE  */
    DEFAULT = 439,                 /* DEFAULT  */
    DEFAULTS = 440,                /* DEFAULTS  */
    DEFERRABLE = 441,              /* DEFERRABLE  */
    DEFERRED = 442,                /* DEFERRED  */
    DEFINER = 443,                 /* DEFINER  */
    DELETE_P = 444,                /* DELETE_P  */
    DELIMITER = 445,               /* DELIMITER  */
    DELIMITERS = 446,              /* DELIMITERS  */
    DEPENDS = 447,                 /* DEPENDS  */
    DESC = 448,                    /* DESC  */
    DETACH = 449,                  /* DETACH  */
    DICTIONARY = 450,              /* DICTIONARY  */
    DISABLE_P = 451,               /* DISABLE_P  */
    DISCARD = 452,                 /* DISCARD  */
    DISTINCT = 453,                /* DISTINCT  */
    DO = 454,                      /* DO  */
    DOCUMENT_P = 455,              /* DOCUMENT_P  */
    DOMAIN_P = 456,                /* DOMAIN_P  */
    DOUBLE_P = 457,                /* DOUBLE_P  */
    DROP = 458,                    /* DROP  */
    EACH = 459,                    /* EACH  */
    ELSE = 460,                    /* ELSE  */
    ENABLE_P = 461,                /* ENABLE_P  */
    ENCODING = 462,                /* ENCODING  */
    ENCRYPTED = 463,               /* ENCRYPTED  */
    END_P = 464,                   /* END_P  */
    ENUM_P = 465,                  /* ENUM_P  */
    ESCAPE = 466,                  /* ESCAPE  */
    EVENT = 467,                   /* EVENT  */
    EXCEPT = 468,                  /* EXCEPT  */
    EXCLUDE = 469,                 /* EXCLUDE  */
    EXCLUDING = 470,               /* EXCLUDING  */
    EXCLUSIVE = 471,               /* EXCLUSIVE  */
    EXECUTE = 472,                 /* EXECUTE  */
    EXISTS = 473,                  /* EXISTS  */
    EXPLAIN = 474,                 /* EXPLAIN  */
    EXPRESSION = 475,              /* EXPRESSION  */
    EXTENSION = 476,               /* EXTENSION  */
    EXTERNAL = 477,                /* EXTERNAL  */
    EXTRACT = 478,                 /* EXTRACT  */
    FALSE_P = 479,                 /* FALSE_P  */
    FAMILY = 480,                  /* FAMILY  */
    FETCH = 481,                   /* FETCH  */
    FILTER = 482,                  /* FILTER  */
    FIRST_P = 483,                 /* FIRST_P  */
    FLOAT_P = 484,                 /* FLOAT_P  */
    FOLLOWING = 485,               /* FOLLOWING  */
    FOR = 486,                     /* FOR  */
    FORCE = 487,                   /* FORCE  */
    FOREIGN = 488,                 /* FOREIGN  */
    FORWARD = 489,                 /* FORWARD  */
    FREEZE = 490,                  /* FREEZE  */
    FROM = 491,                    /* FROM  */
    FULL = 492,                    /* FULL  */
    FUNCTION = 493,                /* FUNCTION  */
    FUNCTIONS = 494,               /* FUNCTIONS  */
    GENERATED = 495,               /* GENERATED  */
    GLOBAL = 496,                  /* GLOBAL  */
    GRANT = 497,                   /* GRANT  */
    GRANTED = 498,                 /* GRANTED  */
    GREATEST = 499,                /* GREATEST  */
    GROUP_P = 500,                 /* GROUP_P  */
    GROUPING = 501,                /* GROUPING  */
    GROUPS = 502,                  /* GROUPS  */
    HANDLER = 503,                 /* HANDLER  */
    HAVING = 504,                  /* HAVING  */
    HEADER_P = 505,                /* HEADER_P  */
    HOLD = 506,                    /* HOLD  */
    HOUR_P = 507,                  /* HOUR_P  */
    IDENTITY_P = 508,              /* IDENTITY_P  */
    IF_P = 509,                    /* IF_P  */
    ILIKE = 510,                   /* ILIKE  */
    IMMEDIATE = 511,               /* IMMEDIATE  */
    IMMUTABLE = 512,               /* IMMUTABLE  */
    IMPLICIT_P = 513,              /* IMPLICIT_P  */
    IMPORT_P = 514,                /* IMPORT_P  */
    IN_P = 515,                    /* IN_P  */
    INCLUDE = 516,                 /* INCLUDE  */
    INCLUDING = 517,               /* INCLUDING  */
    INCREMENT = 518,               /* INCREMENT  */
    INDEX = 519,                   /* INDEX  */
    INDEXES = 520,                 /* INDEXES  */
    INHERIT = 521,                 /* INHERIT  */
    INHERITS = 522,                /* INHERITS  */
    INITIALLY = 523,               /* INITIALLY  */
    INLINE_P = 524,                /* INLINE_P  */
    INNER_P = 525,                 /* INNER_P  */
    INOUT = 526,                   /* INOUT  */
    INPUT_P = 527,                 /* INPUT_P  */
    INSENSITIVE = 528,             /* INSENSITIVE  */
    INSERT = 529,                  /* INSERT  */
    INSTEAD = 530,                 /* INSTEAD  */
    INT_P = 531,                   /* INT_P  */
    INTEGER = 532,                 /* INTEGER  */
    INTERSECT = 533,               /* INTERSECT  */
    INTERVAL = 534,                /* INTERVAL  */
    INTO = 535,                    /* INTO  */
    INVOKER = 536,                 /* INVOKER  */
    IS = 537,                      /* IS  */
    ISNULL = 538,                  /* ISNULL  */
    ISOLATION = 539,               /* ISOLATION  */
    JOIN = 540,                    /* JOIN  */
    KEY = 541,                     /* KEY  */
    LABEL = 542,                   /* LABEL  */
    LANGUAGE = 543,                /* LANGUAGE  */
    LARGE_P = 544,                 /* LARGE_P  */
    LAST_P = 545,                  /* LAST_P  */
    LATERAL_P = 546,               /* LATERAL_P  */
    LEADING = 547,                 /* LEADING  */
    LEAKPROOF = 548,               /* LEAKPROOF  */
    LEAST = 549,                   /* LEAST  */
    LEFT = 550,                    /* LEFT  */
    LEVEL = 551,                   /* LEVEL  */
    LIKE = 552,                    /* LIKE  */
    LIMIT = 553,                   /* LIMIT  */
    LISTEN = 554,                  /* LISTEN  */
    LOAD = 555,                    /* LOAD  */
    LOCAL = 556,                   /* LOCAL  */
    LOCALTIME = 557,               /* LOCALTIME  */
    LOCALTIMESTAMP = 558,          /* LOCALTIMESTAMP  */
    LOCATION = 559,                /* LOCATION  */
    LOCK_P = 560,                  /* LOCK_P  */
    LOCKED = 561,                  /* LOCKED  */
    LOGGED = 562,                  /* LOGGED  */
    MAPPING = 563,                 /* MAPPING  */
    MATCH = 564,                   /* MATCH  */
    MATERIALIZED = 565,            /* MATERIALIZED  */
    MAXVALUE = 566,                /* MAXVALUE  */
    METHOD = 567,                  /* METHOD  */
    MINUTE_P = 568,                /* MINUTE_P  */
    MINVALUE = 569,                /* MINVALUE  */
    MODE = 570,                    /* MODE  */
    MONTH_P = 571,                 /* MONTH_P  */
    MOVE = 572,                    /* MOVE  */
    NAME_P = 573,                  /* NAME_P  */
    NAMES = 574,                   /* NAMES  */
    NATIONAL = 575,                /* NATIONAL  */
    NATURAL = 576,                 /* NATURAL  */
    NCHAR = 577,                   /* NCHAR  */
    NEW = 578,                     /* NEW  */
    NEXT = 579,                    /* NEXT  */
    NFC = 580,                     /* NFC  */
    NFD = 581,                     /* NFD  */
    NFKC = 582,                    /* NFKC  */
    NFKD = 583,                    /* NFKD  */
    NO = 584,                      /* NO  */
    NONE = 585,                    /* NONE  */
    NORMALIZE = 586,               /* NORMALIZE  */
    NORMALIZED = 587,              /* NORMALIZED  */
    NOT = 588,                     /* NOT  */
    NOTHING = 589,                 /* NOTHING  */
    NOTIFY = 590,                  /* NOTIFY  */
    NOTNULL = 591,                 /* NOTNULL  */
    NOWAIT = 592,                  /* NOWAIT  */
    NULL_P = 593,                  /* NULL_P  */
    NULLIF = 594,                  /* NULLIF  */
    NULLS_P = 595,                 /* NULLS_P  */
    NUMERIC = 596,                 /* NUMERIC  */
    OBJECT_P = 597,                /* OBJECT_P  */
    OF = 598,                      /* OF  */
    OFF = 599,                     /* OFF  */
    OFFSET = 600,                  /* OFFSET  */
    OIDS = 601,                    /* OIDS  */
    OLD = 602,                     /* OLD  */
    ON = 603,                      /* ON  */
    ONLY = 604,                    /* ONLY  */
    OPERATOR = 605,                /* OPERATOR  */
    OPTION = 606,                  /* OPTION  */
    OPTIONS = 607,                 /* OPTIONS  */
    OR = 608,                      /* OR  */
    ORDER = 609,                   /* ORDER  */
    ORDINALITY = 610,              /* ORDINALITY  */
    OTHERS = 611,                  /* OTHERS  */
    OUT_P = 612,                   /* OUT_P  */
    OUTER_P = 613,                 /* OUTER_P  */
    OVER = 614,                    /* OVER  */
    OVERLAPS = 615,                /* OVERLAPS  */
    OVERLAY = 616,                 /* OVERLAY  */
    OVERRIDING = 617,              /* OVERRIDING  */
    OWNED = 618,                   /* OWNED  */
    OWNER = 619,                   /* OWNER  */
    PARALLEL = 620,                /* PARALLEL  */
    PARSER = 621,                  /* PARSER  */
    PARTIAL = 622,                 /* PARTIAL  */
    PARTITION = 623,               /* PARTITION  */
    PASSING = 624,                 /* PASSING  */
    PASSWORD = 625,                /* PASSWORD  */
    PLACING = 626,                 /* PLACING  */
    PLANS = 627,                   /* PLANS  */
    POLICY = 628,                  /* POLICY  */
    POSITION = 629,                /* POSITION  */
    PRECEDING = 630,               /* PRECEDING  */
    PRECISION = 631,               /* PRECISION  */
    PRESERVE = 632,                /* PRESERVE  */
    PREPARE = 633,                 /* PREPARE  */
    PREPARED = 634,                /* PREPARED  */
    PRIMARY = 635,                 /* PRIMARY  */
    PRIOR = 636,                   /* PRIOR  */
    PRIVILEGES = 637,              /* PRIVILEGES  */
    PROCEDURAL = 638,              /* PROCEDURAL  */
    PROCEDURE = 639,               /* PROCEDURE  */
    PROCEDURES = 640,              /* PROCEDURES  */
    PROGRAM = 641,                 /* PROGRAM  */
    PUBLICATION = 642,             /* PUBLICATION  */
    QUOTE = 643,                   /* QUOTE  */
    RANGE = 644,                   /* RANGE  */
    READ = 645,                    /* READ  */
    REAL = 646,                    /* REAL  */
    REASSIGN = 647,                /* REASSIGN  */
    RECHECK = 648,                 /* RECHECK  */
    RECURSIVE = 649,               /* RECURSIVE  */
    REF = 650,                     /* REF  */
    REFERENCES = 651,              /* REFERENCES  */
    REFERENCING = 652,             /* REFERENCING  */
    REFRESH = 653,                 /* REFRESH  */
    REINDEX = 654,                 /* REINDEX  */
    RELATIVE_P = 655,              /* RELATIVE_P  */
    RELEASE = 656,                 /* RELEASE  */
    RENAME = 657,                  /* RENAME  */
    REPEATABLE = 658,              /* REPEATABLE  */
    REPLACE = 659,                 /* REPLACE  */
    REPLICA = 660,                 /* REPLICA  */
    RESET = 661,                   /* RESET  */
    RESTART = 662,                 /* RESTART  */
    RESTRICT = 663,                /* RESTRICT  */
    RETURNING = 664,               /* RETURNING  */
    RETURNS = 665,                 /* RETURNS  */
    REVOKE = 666,                  /* REVOKE  */
    RIGHT = 667,                   /* RIGHT  */
    ROLE = 668,                    /* ROLE  */
    ROLLBACK = 669,                /* ROLLBACK  */
    ROLLUP = 670,                  /* ROLLUP  */
    ROUTINE = 671,                 /* ROUTINE  */
    ROUTINES = 672,                /* ROUTINES  */
    ROW = 673,                     /* ROW  */
    ROWS = 674,                    /* ROWS  */
    RULE = 675,                    /* RULE  */
    SAVEPOINT = 676,               /* SAVEPOINT  */
    SCHEMA = 677,                  /* SCHEMA  */
    SCHEMAS = 678,                 /* SCHEMAS  */
    SCROLL = 679,                  /* SCROLL  */
    SEARCH = 680,                  /* SEARCH  */
    SECOND_P = 681,                /* SECOND_P  */
    SECURITY = 682,                /* SECURITY  */
    SELECT = 683,                  /* SELECT  */
    SEQUENCE = 684,                /* SEQUENCE  */
    SEQUENCES = 685,               /* SEQUENCES  */
    SERIALIZABLE = 686,            /* SERIALIZABLE  */
    SERVER = 687,                  /* SERVER  */
    SESSION = 688,                 /* SESSION  */
    SESSION_USER = 689,            /* SESSION_USER  */
    SET = 690,                     /* SET  */
    SETS = 691,                    /* SETS  */
    SETOF = 692,                   /* SETOF  */
    SHARE = 693,                   /* SHARE  */
    SHOW = 694,                    /* SHOW  */
    SIMILAR = 695,                 /* SIMILAR  */
    SIMPLE = 696,                  /* SIMPLE  */
    SKIP = 697,                    /* SKIP  */
    SMALLINT = 698,                /* SMALLINT  */
    SNAPSHOT = 699,                /* SNAPSHOT  */
    SOME = 700,                    /* SOME  */
    SQL_P = 701,                   /* SQL_P  */
    STABLE = 702,                  /* STABLE  */
    STANDALONE_P = 703,            /* STANDALONE_P  */
    START = 704,                   /* START  */
    STATEMENT = 705,               /* STATEMENT  */
    STATISTICS = 706,              /* STATISTICS  */
    STDIN = 707,                   /* STDIN  */
    STDOUT = 708,                  /* STDOUT  */
    STORAGE = 709,                 /* STORAGE  */
    STORED = 710,                  /* STORED  */
    STRICT_P = 711,                /* STRICT_P  */
    STRIP_P = 712,                 /* STRIP_P  */
    SUBSCRIPTION = 713,            /* SUBSCRIPTION  */
    SUBSTRING = 714,               /* SUBSTRING  */
    SUPPORT = 715,                 /* SUPPORT  */
    SYMMETRIC = 716,               /* SYMMETRIC  */
    SYSID = 717,                   /* SYSID  */
    SYSTEM_P = 718,                /* SYSTEM_P  */
    TABLE = 719,                   /* TABLE  */
    TABLES = 720,                  /* TABLES  */
    TABLESAMPLE = 721,             /* TABLESAMPLE  */
    TABLESPACE = 722,              /* TABLESPACE  */
    TEMP = 723,                    /* TEMP  */
    TEMPLATE = 724,                /* TEMPLATE  */
    TEMPORARY = 725,               /* TEMPORARY  */
    TEXT_P = 726,                  /* TEXT_P  */
    THEN = 727,                    /* THEN  */
    TIES = 728,                    /* TIES  */
    TIME = 729,                    /* TIME  */
    TIMESTAMP = 730,               /* TIMESTAMP  */
    TO = 731,                      /* TO  */
    TRAILING = 732,                /* TRAILING  */
    TRANSACTION = 733,             /* TRANSACTION  */
    TRANSFORM = 734,               /* TRANSFORM  */
    TREAT = 735,                   /* TREAT  */
    TRIGGER = 736,                 /* TRIGGER  */
    TRIM = 737,                    /* TRIM  */
    TRUE_P = 738,                  /* TRUE_P  */
    TRUNCATE = 739,                /* TRUNCATE  */
    TRUSTED = 740,                 /* TRUSTED  */
    TYPE_P = 741,                  /* TYPE_P  */
    TYPES_P = 742,                 /* TYPES_P  */
    UESCAPE = 743,                 /* UESCAPE  */
    UNBOUNDED = 744,               /* UNBOUNDED  */
    UNCOMMITTED = 745,             /* UNCOMMITTED  */
    UNENCRYPTED = 746,             /* UNENCRYPTED  */
    UNION = 747,                   /* UNION  */
    UNIQUE = 748,                  /* UNIQUE  */
    UNKNOWN = 749,                 /* UNKNOWN  */
    UNLISTEN = 750,                /* UNLISTEN  */
    UNLOGGED = 751,                /* UNLOGGED  */
    UNTIL = 752,                   /* UNTIL  */
    UPDATE = 753,                  /* UPDATE  */
    USER = 754,                    /* USER  */
    USING = 755,                   /* USING  */
    VACUUM = 756,                  /* VACUUM  */
    VALID = 757,                   /* VALID  */
    VALIDATE = 758,                /* VALIDATE  */
    VALIDATOR = 759,               /* VALIDATOR  */
    VALUE_P = 760,                 /* VALUE_P  */
    VALUES = 761,                  /* VALUES  */
    VARCHAR = 762,                 /* VARCHAR  */
    VARIADIC = 763,                /* VARIADIC  */
    VARYING = 764,                 /* VARYING  */
    VERBOSE = 765,                 /* VERBOSE  */
    VERSION_P = 766,               /* VERSION_P  */
    VIEW = 767,                    /* VIEW  */
    VIEWS = 768,                   /* VIEWS  */
    VOLATILE = 769,                /* VOLATILE  */
    WHEN = 770,                    /* WHEN  */
    WHERE = 771,                   /* WHERE  */
    WHITESPACE_P = 772,            /* WHITESPACE_P  */
    WINDOW = 773,                  /* WINDOW  */
    WITH = 774,                    /* WITH  */
    WITHIN = 775,                  /* WITHIN  */
    WITHOUT = 776,                 /* WITHOUT  */
    WORK = 777,                    /* WORK  */
    WRAPPER = 778,                 /* WRAPPER  */
    WRITE = 779,                   /* WRITE  */
    XML_P = 780,                   /* XML_P  */
    XMLATTRIBUTES = 781,           /* XMLATTRIBUTES  */
    XMLCONCAT = 782,               /* XMLCONCAT  */
    XMLELEMENT = 783,              /* XMLELEMENT  */
    XMLEXISTS = 784,               /* XMLEXISTS  */
    XMLFOREST = 785,               /* XMLFOREST  */
    XMLNAMESPACES = 786,           /* XMLNAMESPACES  */
    XMLPARSE = 787,                /* XMLPARSE  */
    XMLPI = 788,                   /* XMLPI  */
    XMLROOT = 789,                 /* XMLROOT  */
    XMLSERIALIZE = 790,            /* XMLSERIALIZE  */
    XMLTABLE = 791,                /* XMLTABLE  */
    YEAR_P = 792,                  /* YEAR_P  */
    YES_P = 793,                   /* YES_P  */
    ZONE = 794,                    /* ZONE  */
    NOT_LA = 795,                  /* NOT_LA  */
    NULLS_LA = 796,                /* NULLS_LA  */
    WITH_LA = 797,                 /* WITH_LA  */
    POSTFIXOP = 798,               /* POSTFIXOP  */
    UMINUS = 799                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 586 "preproc.y"

	double	dval;
	char	*str;
	int		ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;
	struct	exec		exec;

#line 624 "preproc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE base_yylval;
extern YYLTYPE base_yylloc;

int base_yyparse (void);


#endif /* !YY_BASE_YY_PREPROC_H_INCLUDED  */
